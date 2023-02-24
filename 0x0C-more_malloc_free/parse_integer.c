#include "main.h"
#include <ctype.h>

/**
 * parse_integer - converts a string of digits to an integer
 * @str: the string to convert
 *
 * Return: the integer represented by the string
 */
int parse_integer(const char* str)
{
  int result = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (!isdigit(str[i])) {
      print_error();
    }
    result = result * 10 + (str[i] - '0');
  }
  return result;
}

