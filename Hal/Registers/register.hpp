#ifndef REGISTER_HPP
#define REGISTER_HPP

#include <cstdint> //for std::uintX_t
#include <cstddef> //for std::size_t


class RegisterReadOnly 
{ 
};

class RegisterWriteOnly 
{ 
};

class RegsiterReadWrite : public RegisterReadOnly, public RegisterWriteOnly 
{ 
};

template <std::size_t>
struct RegisterTraits 
{ 
};

template <>
struct RegisterTraits<8U>  
{ 
  using internalType = std::uint8_t; 
};

template <>
struct RegisterTraits<16U> 
{ 
  using internalType = std::uint16_t; 
};

template <>
struct RegisterTraits<32U> 
{ 
  using internalType = std::uint32_t; 
};

template <>
struct RegisterTraits<64U> 
{ 
  using internalType = std::uint64_t; 
};



template <std::size_t size, typename RegisterType, std::uint32_t address,
class Enable = void>
class Register
{
public:
  using registerType = typename RegisterTraits<size>::internalType;
  
  constexpr Register(): reg{*reinterpret_cast<std::uint32_t*>(address)}
  {
    
  } ;
  
  Register& operator=(const registerType& right) 
  {
    reg = right ;
    return *this ;
  }
  
  Register& operator |=(const registerType& right)
  {
    reg |= right ;
    return *this ;      
  }
  
private:
  volatile registerType & reg;
};

#endif //REGISTER_HPP