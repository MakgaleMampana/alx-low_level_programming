#include <stdio.h>
#include <stdlib.h>

/**
 * main- Entry point
 * Description: Function
 * @argc: Input variable
 * @argv: Input variable 2
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
       	int j = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			j *= atoi(argv[i]);
		}
		printf("%d\n", j);
	}
	return (0);
}
