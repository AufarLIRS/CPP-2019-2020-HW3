#include "Task_resize.h"

char* resize(char* str, unsigned size, unsigned new_size)
{
  if (new_size < size)
    return nullptr;
  char* newStr = new char[new_size];
  for (unsigned i = 0; i < size; i++)
  {
    newStr[i] = str[i];
  }
  delete[] str;
  return newStr;
}
