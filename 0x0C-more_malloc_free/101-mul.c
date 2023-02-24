#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * print_error - Prints an error message to stderr and exits with status 98.
 * @msg: The error message to print.
 */
void print_error(char *msg)
{
	while (*msg)
		_putchar(*(msg++));
	_putchar('\n');
	exit(98);
}

/**
 * parse_integer - Parses an integer from a string.
 * @str: The string to parse.
 *
 * Return: The parsed integer.
 */
int parse_integer(char *str)
{
	int num = 0;

	while (*str)
	{
		if (*str < '0' || *str > '9')
			print_error("Error: Invalid number");
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num);
}

/**
 * multiply - Multiplies two positive integers.
 * @num1: The first integer.
 * @num2: The second integer.
 *
 * Return: The product of the two integers.
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char **argv)
{
	int num1, num2, product;

	if (argc != 3)
		print_error("Error: Two arguments required");

	num1 = parse_integer(argv[1]);
	num2 = parse_integer(argv[2]);

	product = multiply(num1, num2);

	printf("%d\n", product);
	return (0);
}
