#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;

    if (argc != 3 || !is_integer(argv[1]) || !is_integer(argv[2]))
    {
        print_error("Error");
        exit(98);
    }

    num1 = parse_integer(argv[1]);
    num2 = parse_integer(argv[2]);

    result = multiply(num1, num2);

    print_number(result);
    _putchar('\n');

    return (0);
}

/**
 * print_error - prints an error message to stderr
 * @msg: the error message to print
 */
void print_error(char *msg)
{
    while (*msg)
    {
        _putchar(*msg++);
    }
    _putchar('\n');
}

/**
 * is_integer - checks if a string is an integer
 * @str: the string to check
 *
 * Return: 1 if the string is an integer, 0 otherwise
 */
int is_integer(char *str)
{
    if (*str == '-')
        str++;

    while (*str)
    {
        if (!isdigit(*str))
            return (0);
        str++;
    }

    return (1);
}

/**
 * parse_integer - parses an integer from a string
 * @str: the string to parse
 *
 * Return: the integer value of the string
 */
int parse_integer(const char *str)
{
    int value = 0;

    while (*str)
    {
        value *= 10;
        value += (*str - '0');
        str++;
    }

    return (value);
}

/**
 * multiply - multiplies two integers
 * @num1: the first integer
 * @num2: the second integer
 *
 * Return: the product of the two integers
 */
int multiply(int num1, int num2)
{
    return (num1 * num2);
}

/**
 * print_number - prints a number to stdout
 * @num: the number to print
 */
void print_number(int num)
{
    if (num < 0)
    {
        _putchar('-');
        num *= -1;
    }

    if (num / 10)
        print_number(num / 10);

    _putchar((num % 10) + '0');
}

