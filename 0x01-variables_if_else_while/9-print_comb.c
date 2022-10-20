#include <stdlib.h>
#include <stdio.h>
/**
* main - entry point
*
* Description: print numbers in asc order separated by commas and space
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n = '0';

for (n = '0'; n <= '9'; n++)
{
putchar(n);
if (n != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}


