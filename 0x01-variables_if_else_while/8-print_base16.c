#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description:print all base 16 numbers with putchar only
*
* Return: Always 0 (Success)
*
*/

int main(void)

{
int n = '0';
char l = 'a';

for (n = '0'; n <= '9'; n++)
{
putchar(n);

}
for (l = 'a'; l <= 'f'; l++)
{
putchar(l);

}
putchar('\n');

return (0);
}
