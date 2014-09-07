#include <cassert>
#include <type_traits>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>

int main() {

  // returns a function that takes a pair of generic iterators, joining the elements into a stream
  auto joiner = [](auto& stream, auto delim) {
    return [=,&stream](auto first, auto last) {
      static_assert( std::is_same<decltype(first), decltype(last)>(), "iterators of unequal type" );
      std::copy(first, last, std::ostream_iterator<decltype(*first)>(stream, delim));
    };
  };


  // joins elements to cout separated by whitespace
  auto out_joiner = joiner(std::cout, " ");

  // may now be used on any pair of iterators
  std::vector<char> cvec{'r', 's', 't'};
  out_joiner(std::cbegin(cvec), std::cend(cvec));

  std::vector<int> ivec{2, 3, 4};
  out_joiner(std::cbegin(ivec), std::cend(ivec));

  // note: we need the is_same check, otherwise you could pass: begin(cvec), end(ivec)


  // TODO: capture expression

}
