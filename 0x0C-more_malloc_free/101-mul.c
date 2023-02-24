#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void print_error(void) {
  printf("Error\n");
  exit(98);
}

int parse_integer(const char* str) {
  int result = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (!isdigit(str[i])) {
      print_error();
    }
    result = result * 10 + (str[i] - '0');
  }
  return result;
}

void multiply(const char* str1, const char* str2) {
  int num1 = parse_integer(str1);
  int num2 = parse_integer(str2);
  int result = num1 * num2;
  printf("%d\n", result);
}

int main(int argc, char** argv) {
  if (argc != 3) {
    print_error();
  }
  multiply(argv[1], argv[2]);
  return 0;
}
