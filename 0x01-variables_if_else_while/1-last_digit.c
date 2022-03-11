#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * program determines if a last digit of a number is >5, <6 or zero
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n%10 > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", n);
	}
	else if(n%10 < 6 && n%10 !=0)
	{
		printf("Last digit on n is %d and is less than 6 and not 0\n", n);
	}
	else
	{
		printf("Last digit of n is %d and is 0\n", n);
	}
	return (0);
}