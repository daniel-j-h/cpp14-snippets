#include <cassert>
#include <type_traits>
#include <string>
#include <chrono>

int main() {

  // unfortunately literals have their own namespaces
  using namespace std::literals::string_literals;

  // std::string literal
  auto s = "Hello"s;

  assert( s.length() == 5 );  
  assert(( std::is_same<decltype("Hello"s), std::string>() ));


  // same for chrono literals
  using namespace std::literals::chrono_literals;

  auto sec = 1s;
  auto minute = 1min;
  auto hour = 1h;

  assert( minute == 60 * sec );
  assert( hour == 60 * minute );


  // binary literals
  assert(0b1111 == 0xF);


  // separator '
  assert( 0b1111'1111'1111'1111 == 0xFFFF );
  assert( 10'000'000 == 10 * 1'000'000 );


  // see: http://en.cppreference.com/w/cpp/language/user_literal

}
