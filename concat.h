#ifndef CONCAT_H
#define CONCAT_H
char* strcat(char* to, char* from)
{
  int to_length;
  char* to_iterator = to;
  for (to_length = 0; *to_iterator; to_length++)  // count length of first string
  {
    to_iterator++;
  }
  int from_length;
  char* from_iterator = from;
  for (from_length = 0; *from_iterator; from_length++)  // count length of second string
  {
    from_iterator++;
  }

  to_iterator = to;
  char* result =
      new char[to_length - 1 + from_length];  // create another string, that will contain a first ans second strings
  to = result;
  *to = *to_iterator;
  for (; *to_iterator; to_iterator++)  // fill result string with first string
  {
    *to = *to_iterator;
    to++;
  }
  for (; *from; from++)  // fill result string with second string
  {
    *to = *to_iterator;
    to++;
  }
  *to = 0;
  return to;
}
#endif  // CONCAT_H
