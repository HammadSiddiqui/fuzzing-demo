#include <cstdint>
#include <stddef.h>
#include <iostream>



size_t someother(uint8_t x) {
  if(x==9) {
      return 0;
  } 
   return 1;
}

size_t find_newline(const char *str)
{
    size_t location = 0;

    while (str[location] != '\n') 
    {
        ++location;


    }
  

    return location;
}


extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {
  
 // std::cout << "Input Value : \n" << Data;
 // find_newline(reinterpret_cast<const char *> (Data));
  someother(*Data);
  return 0;   
}


// int main() 
// {
//   //print the index of \n 
//   std::cout << find_newline("ma");

// }















        // if (location == sizeof(str)) { //becoming memory safe by cutting off loop at the end of string
        //   return 0;
        // }