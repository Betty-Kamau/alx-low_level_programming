#include "main.h"

/**
 * print_line - Prints a straight line
 * int n - length of line to be printed
 * Returns: Always 0
 */

void print_line(int n)
{
	int i;
	char c, line, ln, lnn;

	c = '_';
	line = '\n';
	ln = 92;
	lnn = 'n';

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar(c);
		}
		else if (n < 0)
		{
			_putchar(ln);
			_putchar(lnn);
		}
		else
		{
			_putchar(ln);
			_putchar(lnn);
		}
	}
	_putchar(line);
}
