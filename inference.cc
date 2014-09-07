#include <type_traits>

// return type deduced by rules of template argument deduction, i.e. you have to write: "const auto&" explicitely as return type
template <typename T>
auto identity(const T& id) {
  return id;
}

// return type deduced by rules of decltype
template <typename T>
decltype(auto) identity2(const T& id) {
  return id;
}

int main() {
  int r = 2;

  static_assert( std::is_same< decltype(identity(r)), int >(), "template argument deduction did not return int" );
  static_assert( std::is_same< decltype(identity2(r)), int const& >(), "decltype type deduction did not return int const&" );

  // you'd have to write "const auto&" instead
  decltype(auto) rv = identity2(r);
  static_assert( std::is_same< decltype(rv), int const& >(), "variable initializer decltype type deduction did not return int const&" );

  // note: return type deduction even works with recursion, as long as the recursive call is not the first return

  // see:
  //  - http://en.cppreference.com/w/cpp/language/function#Return_type_deduction
  //  - http://en.cppreference.com/w/cpp/language/auto

}
