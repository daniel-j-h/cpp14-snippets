#include <cassert>
#include <type_traits>
#include <vector>
#include <iterator>

int main() {

  // freestanding cbegin, cend for const-qualified iterators
  std::vector<int> ivec{2, 3, 4};
  assert( std::distance(std::cbegin(ivec), std::cend(ivec)) == 3 );
  static_assert( std::is_same< decltype(std::cbegin(ivec)), decltype(ivec)::const_iterator >(), "expected const-qualified iterator" );

  // rbegin, rend, crbegin, crend -- note: convert reverse iterator to iterator via .base() 
  assert( std::crbegin(ivec).base() == std::cend(ivec) );

  // constexpr allows for compile time checks
  int iarr[]{2, 3, 4};
  static_assert( std::cend(iarr) - std::cbegin(iarr) == 3, "expected three elements" );

  // see:
  //  - http://en.cppreference.com/w/cpp/iterator/begin
  //  - http://en.cppreference.com/w/cpp/iterator/end

}
