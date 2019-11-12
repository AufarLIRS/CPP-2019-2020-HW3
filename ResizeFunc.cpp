#include "ResizeFunc.h"

char *resizenew(char *str, unsigned size, unsigned new_size) {
  if (new_size < size)
    return nullptr;
  auto *temp = new char[new_size];
  for (unsigned i = 0; i < size; i++) {
    temp[i] = str[i];
  }
  delete[] str;
  return temp;
}
