#include "main.h"
#include <stdio.h>

/**
* _isdigit - checks for digits between 0 and 9
* @1 - digit between 0 and 9
* Return: int c
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
