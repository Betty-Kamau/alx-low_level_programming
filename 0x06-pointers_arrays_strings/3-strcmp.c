#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1 : pointer to char params
 * @s2 : pointer to char params
 * Return: *dest
 */

int _strcmp(char *s1, char *s2)
{
	int j;
	int D;

	j = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		j++;
	}
	D = s1[i] - s2[i];
	return (D);
}
