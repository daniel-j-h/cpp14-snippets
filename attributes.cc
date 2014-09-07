// works on functions, classes..
class [[deprecated("this was not a good idea to begin with")]]
stream { };

int main() {

  // ..also on variables; reason is optional
  [[deprecated("don't use this anymore")]]
  auto make_stream = [](){ return stream{}; };

  make_stream();

  // see: http://en.cppreference.com/w/cpp/language/attributes

}
