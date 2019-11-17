#include "strcat_new.h"

void strcat_new(char* to, const char* from)
{
  while (*to)
    to++;
  while (*from)
  {
    *to = *from;
    to++;
    from++;
  }
}
