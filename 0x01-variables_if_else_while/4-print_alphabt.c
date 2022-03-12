#include <stdio.h>
/**
 * main - Entry point
 * Prints the alphabet in lowercase except e and q, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e')
		{
			continue;
		}

		else if (alphabet == 'q')
		{
			continue;
		}

		else
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
