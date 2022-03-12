#include <stdio.h>
/**
 * main - Entry point
 * Prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 48;

	while (number < 58)
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
