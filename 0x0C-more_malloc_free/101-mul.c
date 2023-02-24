#include "main.h"
#include <stdlib.h>

/**
 * main - entry point of the program
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char** argv)
{
  if (argc != 3) {
    print_error();
  }

  multiply(argv[1], argv[2]);

  return 0;
}

