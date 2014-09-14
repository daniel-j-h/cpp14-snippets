#include <cassert>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {

  std::vector<int> r{2, 3, 4};
  std::vector<int> s{2, 3};

  // overloads no longer assume same length; instead they now take: [first, last), [first2, last2)
  auto equal = std::equal(std::begin(r), std::end(r), std::begin(s), std::end(s));
  assert( !equal );

  auto mismatch = std::mismatch(std::begin(r), std::end(r), std::begin(s), std::end(s));
  assert( mismatch.first == std::end(r) - 1 );
  assert( mismatch.second == std::end(s) );

  auto permutation = std::is_permutation(std::begin(r), std::end(r), std::begin(s), std::end(s));
  assert( !permutation );

  // note: consider a range library, e.g. Boost.Range for:  equal(r, s);

  // see:
  //  - http://en.cppreference.com/w/cpp/algorithm/equal
  //  - http://en.cppreference.com/w/cpp/algorithm/mismatch
  //  - http://en.cppreference.com/w/cpp/algorithm/is_permutation

}
