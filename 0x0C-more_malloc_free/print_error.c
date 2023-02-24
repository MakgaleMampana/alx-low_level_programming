#include "main.h"

/**
 * print_error - prints an error message and exits with a status of 98
 */
void print_error(void)
{
  const char *msg = "Error\n";
  while (*msg)
    _putchar(*msg++);
  exit(98);
}

