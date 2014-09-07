#include <cassert>
#include <tuple>
#include <string>

int main() {

  using namespace std::literals::string_literals;
  auto t = std::make_tuple(2, "Hello"s);

  // access by type
  assert( std::get<int>(t) == 2 );
  assert( std::get<std::string>(t) == "Hello"s );

  // or index as usual
  assert( std::get<0>(t) == std::get<int>(t) );
  assert( std::get<1>(t) == std::get<std::string>(t) );

  // see: http://en.cppreference.com/w/cpp/utility/tuple/get

}
