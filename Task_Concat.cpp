#include <iostream>
#include "Task_Concat.h"

void custom_strcat(char* to, const char* from)
{
  while (*to)
    to++;
  while (*from)
  {
    *to = *from;
    to++;
    from++;
  }
  *to = '\0';
}
