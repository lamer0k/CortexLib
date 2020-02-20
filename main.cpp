
#include <cstddef>

struct Register
{ 
  constexpr Register(size_t& addr): reg(addr)
  {
  }

  void Write(size_t data) const
  {
    //*reg = data ;
  }    
  
private:
  volatile size_t &reg ;
} ;

size_t IDR = *reinterpret_cast<size_t*>(0x00010U) ;

//static size_t value = 10 ;
//size_t& IDR = value ;
constexpr Register reg(IDR) ; 

int main()
{
  reg.Write(10) ;
}