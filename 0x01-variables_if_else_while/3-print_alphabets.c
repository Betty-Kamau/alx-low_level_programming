#include <stdio.h>
/**
 *  * main - Entry point
 *   *The function prints all lowercase and uppercase numbers
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
	        char ch = 'a';

		while (ch <= 'z')
                {
			putchar(ch);
			ch++;
		}
		char CH = 'A';

		while (ch <= 'Z')
		{
			putchar(CH);
			CH++;
		}
	 	putchar('\n');
		return (0);
}
