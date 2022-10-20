#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description:print all single base 10 numbers with putchar only
*
* Return: Always 0 (Success)
*
*/

int main(void)

{
int n = '0';

for (n = '0'; n <= '9'; n++)
{
putchar(n);

}
putchar('\n');

return (0);
}
