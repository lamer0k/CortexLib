//
// Created by SKolody on 26.09.2019.
//

#ifndef PATTERN_MATCHING_GUIDE_HPP
#define PATTERN_MATCHING_GUIDE_HPP

struct Other {};
constexpr Other other{};

template <typename Pattern, typename Arg>
struct Case
{
  auto &&arg() &&
  {
    return std::forward<Arg>(arg_) ;
  }
  
  Pattern pattern;
  Arg arg_; //наши значения которые передали в паттерн
};


template <typename>
struct Guide;

template <typename T>
struct GuideBase {
  using type = Guide<T>;
  
  
  template <typename Rhs>
  auto operator=(Rhs &&rhs) && {
      return Case<type, Rhs &&>{static_cast<type &&>(*this), std::forward<Rhs>(rhs)};
  }
};


template <typename Pattern>
struct Guide: GuideBase<Pattern>
{
  Guide(Pattern _pattern) : pattern{pattern} {} ;
  static constexpr std::size_t size = sizeof(Pattern);
  
  using super = GuideBase<Pattern>;
  using super::operator=;

  Pattern pattern ;
};

template <typename Pattern>
auto guide(const Pattern & pattern) {
  return Guide<Pattern>{pattern};
}



#endif //PATTERN_MATCHING_GUIDE_HPP
