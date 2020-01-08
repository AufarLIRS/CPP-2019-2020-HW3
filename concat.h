#ifndef CONCAT_H
#define CONCAT_H
void strcat(char* to, const char* from)
{
  int to_length;
  char to_iterator = to;
  for (to_length = 0; *to_iterator; length++)
    to_iterator++;

  int from_length;
  char* from_iterator = from;
  for (from_length = 0; *from_iterator; from_length++)
    from_iterator++;

  to_iterator = to;
  to = new char[to_length + from_length];
  *to = *to_iterator;
  for (; to_iterato; to_iterator++)
  {
    *to = *to_iterator;
    to++;
  }

  for (; from; from++)
  {
    *to = *to_iterator;
    to++;
  }
  *to = 0;
}
#endif  // CONCAT_H
