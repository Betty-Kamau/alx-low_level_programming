#include <stdio.h>

/*
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
/*
<<<<<<< HEAD
*	i = 0;
*
*	while (i < 10)
*	{
*		putchar(i);
*	}
*/	
=======
 *	i = 0;
 *	
 *	while (i < 10)
 *	{
 *		putchar(i);
 *	}
*/
>>>>>>> 2e98a1a2ea1a703b5349549bbec7615b3043352b
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
