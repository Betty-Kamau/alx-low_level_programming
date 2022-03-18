#include "main.h"

/**
 * print_line - Prints a straight line
 * int n - length of line to be printed
 * Returns: Always 0
 */

void print_line(int n)
{
	int i;
	char c, line;

	c = '_';
	line = '\n';

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar(c);
		}
		else
		{
			_putchar(line);
		}
	}
	_putchar(line);
}
