#ifndef RESIZE
#define RESIZE
#include <iostream>
char* resize_new(char* str, unsigned size, unsigned new_size)
{
  if (new_size < size)
    return nullptr;
  char* new_string = new char[new_size];
  for (size_t i = 0; i < size; i++)
    new_str[i] = str[i];
  delete[] str;
  return new_string;
}
#endif  // RESIZE
