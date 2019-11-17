#include <iostream>
#include "Task_Concat.h"

void strcat(char* to, const char* from)
{
  for (int i = 0; i < sizeof(to); i++)
  {
    if (to[i] == '\0')
    {
      for (int j = 0; j < sizeof(from); j++)
      {
        to[i + j] = from[j];
      }
      return;
    }
  }
}
