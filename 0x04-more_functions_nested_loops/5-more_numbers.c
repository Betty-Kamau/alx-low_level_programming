#include "main.h"

/**
 * more_numbers - prints numbers between 0 and 14 10 times
 *
 * return: always 0
 */

void more_numbers(void)
{
	int i;
	char num;
	
	for (i = 0; i <= 9; i++)
	{
		for (num = 48; num <= 57; num++)
		{
			putchar(num);
		}
		for (num = 48; num <= 52; num++)
		{
			putchar(num + 10);
		}
		putchar('\n');
	}
}
