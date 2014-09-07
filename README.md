C++14 Snippets
==============

Learn the new C++14 features by examples


Description
-----------

Source for the references is the free [N3936](https://raw.githubusercontent.com/cplusplus/draft/ab1e49a22e78386e263e787cd1e705f9c81e951f/papers/N3936.pdf) working draft (pdf), dated 2nd March 2014

    clang++3.4 -std=c++1y -stdlib=libc++ -Weverything -Wno-c++98-compat -Wno-c++98-compat-pedantic xxx.cc

Note: feel free to help out, search for "TODO"


|                    File                 |       Reference       |                                Description                           |
| --------------------------------------- | --------------------- | -------------------------------------------------------------------- |
| [literals.cc](literals.cc)              |          tbd          | string literals, binary literals, digit separator                    |
| [lambda.cc](lambda.cc)                  |          tbd          | generic lambdas, lambda captures                                     |
| [inference.cc](inference.cc)            |          tbd          | return type inference                                                |
| [iterator.cc](iterator.cc)              |          tbd          | cbegin, cend                                                         |
| [constexpr.cc](constexpr.cc)            |          tbd          | relaxed constexpr restrictions, const constexpr                      |
| [make_unique.cc](make_unique.cc)        |          tbd          | make\_unique                                                         |
| [tuple.cc](tuple.cc)                    |          tbd          | get<T>                                                               |
| [attributes.cc](attributes.cc)          |          tbd          | deprecated attribute                                                 |
| [quoted.cc](quoted.cc)                  |          tbd          | quoted                                                               |
| [exchange.cc](exchange.cc)              |          tbd          | exchange                                                             |
| [sequence.cc](sequence.cc)              |          tbd          | integer\_sequence                                                    |
| [functors.cc](functors.cc)              |          tbd          | type deduction for greater<> et al.                                  |

Warning: not a complete list of changes (yet) -- work in progress.

Here's my [C++11 edition](https://github.com/daniel-j-h/cpp11-snippets).  
But keep in mind: the C++11 edition is from two years ago as I was still learning C++11. And it's not really maintained anymore.
