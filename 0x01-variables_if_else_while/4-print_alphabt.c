#include <stdio.h>
/**
 * main - Entry point
 * The function prints the alphabet in lowercase except e and q, followed by a new line
 * Return: Always 0 (Success)
 */

int main (void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'e' || ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
