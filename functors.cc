#include <cassert>
#include <functional>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
#include <iterator>

int main() {

  std::vector<std::string> svec{"xxx", "xxxx", "x", "xx"};
  auto second = std::begin(svec) + 1;

  // comparator's operator() parameter type is deduced from its arguments
  std::nth_element(std::begin(svec), second, std::end(svec), std::less<>{});
  assert(*second == "xx"); // second smallest element is xx

  // no need to write std::greater<std::string>{}
  std::nth_element(std::begin(svec), second, std::end(svec), std::greater<>{});
  assert(*second == "xxx"); // second largest element is xxx


  // count_ones([0 1 1 0] | [1 1 0 0]) = count_ones([1 1 1 0]) == 3
  std::vector<bool> lhs{0, 1, 1, 0}, rhs{1, 1, 1, 0};
  auto count = std::inner_product(std::begin(lhs), std::end(lhs), std::begin(rhs),
                                  0, std::plus<>{}, std::logical_or<>{});
  // functor<>{} instantiates a new functor template with generic operator()
  assert( count == 3 );

  // see: http://en.cppreference.com/w/cpp/utility/functional#Function_objects

}
