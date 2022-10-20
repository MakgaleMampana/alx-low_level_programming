#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description:print letters in lowercase except q and e
*
* Return: Always 0 (Success)
*
*/

int main(void)

{
	char lcl = 'a';

	for (lcl = 'a'; lcl <= 'z'; lcl++)
	{
		if (lcl != 'q' && lcl != 'e')
		{
			putchar(lcl);
		}
	}
	putchar('\n');

	return (0);
}
