#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * multiply - multiplies two positive numbers and prints the result
 * @str1: the first number
 * @str2: the second number
 */
void multiply(const char* str1, const char* str2)
{
  int num1 = parse_integer(str1);
  int num2 = parse_integer(str2);
  int result = num1 * num2;

  char buffer[20];
  sprintf(buffer, "%d\n", result);
  for (size_t i = 0; i < strlen(buffer); i++) {
    _putchar(buffer[i]);
  }
}

