#include <cstdint>
#include <stddef.h>
#include <iostream>

size_t find_newline(const char *str)
{
    size_t location = 0;
   // size_t length = strlen(str);


    while (str[location] != '\n') 
    {

        ++location;

        // if (location == sizeof(str)) { //becoming memory safe by cutting off loop at the end of string
        //   return 1;
        // }
    }
  

    return location;
}


extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {
  
 // std::cout << "Input Value : \n" << Data;
  find_newline(reinterpret_cast<const char *> (Data));
  
  return 0;  // Values other than 0 and -1 are reserved for future use. 
}


// int main() 
// {
//   //print the index of \n 
//   std::cout << find_newline("Hello\n");

// }
