#include <stdlib.h>
#include <stdio.h>
/**
* main - entry point
*
* Description: print letters in lowercase in reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{
char lcl = 'z';

for (lcl = 'z'; lcl >= 'a'; lcl--)
{
putchar(lcl);
}
putchar('\n');
return (0);
}


