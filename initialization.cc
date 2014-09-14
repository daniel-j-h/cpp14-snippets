#include <cassert>
#include <array>

int main() {

  // without brace elision
  std::array<int, 2> r{{2, 3}};
  assert( r.size() == 2 );

  // now with brace elision
  std::array<int, 2> s{2, 3};
  assert( s.size() == 2 );

  // see: http://en.cppreference.com/w/cpp/language/aggregate_initialization

}
