#include <cassert>
#include <functional>
#include <algorithm>
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
  assert(*second == "xxx"); // second largest element is xx

  // see: http://en.cppreference.com/w/cpp/utility/functional#Function_objects

}
