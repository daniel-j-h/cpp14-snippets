#include <cstddef>
#include <cmath>
#include <cassert>
#include <type_traits>

// TODO:
//  - more advanced snippets
//  - my stdlib does not support x_t instead of x<y>{} or x<y>::type yet, replace if tested


// type constraints helper
#define REQUIRES(...) typename=std::enable_if<(__VA_ARGS__)>()

// concept'ish way of specifying type constraints, such as
template <typename T, REQUIRES( std::is_integral<T>() )>
std::size_t digits(T x) {
  return static_cast<std::size_t>(::floor(::log10(x)) + 1);
}


int main() {

  assert( digits(234) == 3 );
  assert( digits(2) == 1 );

  // see: http://en.cppreference.com/w/cpp/header/type_traits

}
