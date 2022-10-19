#include <stdlib.h>
#include <stdio.h>
/**
* main - entry point
*
* Description: print letters in lowercase & uppercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
char l = 'a';

for (l = 'a'; l <= 'z'; l++)
{
putchar(l);
}
for (l = 'A'; l <= 'Z'; l++)
{
	putchar(l);
}
putchar('\n');
return (0);
}


