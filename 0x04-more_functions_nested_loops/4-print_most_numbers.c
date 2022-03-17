#include "main.h"

/**
 * print_most_numbers - prints all numbes except 2 and 4
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
	char num;
	for (num = 48; num <= 57; num++)
	{
		if (num == 50)
		{
			continue;
		}
		else if (num == 52)
		{
			continue;
		}
		else
		{
			putchar(num);
		}
	}
	putchar('\n');
}
