#ifndef __SINGLETON_HPP
#define __SINGLETON_HPP

template<typename T, auto ...args>
class Singleton
{
public:
  Singleton(const Singleton &) = delete;
  Singleton &operator=(const Singleton &) = delete;

  static T &GetInstance()
  {
     return instance;
  }

protected:
  static T instance;
  Singleton() = default;
};

template<typename T, auto ...args>
T Singleton<T, args...>::instance(args...);;


template<typename T>
class SingletonRunTime
{
public:
  SingletonRunTime(const SingletonRunTime &) = delete;
  SingletonRunTime &operator=(const SingletonRunTime &) = delete;

  template<typename ...Args>
  static T& GetInstance(Args ...args)
  {
    static T instance(args...) ;
    return instance;
  }

protected:
  SingletonRunTime() = default;
};


#endif