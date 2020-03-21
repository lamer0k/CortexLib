#ifndef __SINGLETON_HPP
#define __SINGLETON_HPP

#include <type_traits> //for enable_if_t
#include "memoryobject.hpp" // for RomObject, RamObject

template<typename T,
         class Enable = void,
         auto ...args>
class Singleton ;

template<typename T, auto ...args>
class Singleton<T, typename std::enable_if_t<!std::is_base_of<RomObject, T>::value && !std::is_base_of<RamObject, T>::value>, args...>
{
public:
  Singleton(const Singleton &) = delete;
  Singleton &operator=(const Singleton &) = delete;

  constexpr static T& GetInstance()
  {
     return instance;
  }

protected:
  static T instance;
  Singleton() = default;
};

template<typename T, auto ...args>
T Singleton<T, typename std::enable_if_t<!std::is_base_of<RomObject, T>::value && !std::is_base_of<RamObject, T>::value>, args...>::instance(args...);;


template<typename T, auto ...args>
class Singleton<T, typename std::enable_if_t<std::is_base_of<RomObject, T>::value>, args...>
{
public:
  Singleton(const Singleton &) = delete;
  Singleton &operator=(const Singleton &) = delete;

  constexpr static const T &GetInstance()
  {
    return instance;
  }

protected:
  static constexpr T instance = T(args...);
  constexpr Singleton() = default;
};



template<typename T, auto ...args>
class Singleton<T, typename std::enable_if_t<std::is_base_of<RamObject, T>::value>, args...>
{
public:
  Singleton(const Singleton &) = delete;
  Singleton &operator=(const Singleton &) = delete;

  static T& GetInstance()
  {
    static T instance(args...) ;
    return instance;
  }

  template<typename ...Args>
  static T& GetInstance(Args ...arg)
  {
    static T instance(arg...) ;
    return instance;
  }

protected:
  Singleton() = default;
};


#endif