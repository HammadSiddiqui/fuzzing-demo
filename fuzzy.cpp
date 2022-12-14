#include <cstdint>
#include <stddef.h>

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
  find_newline(reinterpret_cast<const char *> (Data));
  return 0;  // Values other than 0 and -1 are reserved for future use.
}


// int main() 
// {
//   return find_newline("Hello\n");
// }
