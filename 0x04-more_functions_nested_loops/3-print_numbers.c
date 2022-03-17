#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 followed by new line
 *
 * Return: always 0
 */

void print_numbers(void)
{
	char numbers;
	for (numbers = 48; numbers <= 57; numbers++)
	{
		putchar(numbers);
	}
	putchar('\n');
}
