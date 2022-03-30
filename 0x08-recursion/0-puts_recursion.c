#include "main.h"

/**
 * void _puts_recursion - prints a string
 * @s: pointer to string params
 * Return: char *s
 */

void _puts_recursion(char *s)
{
    if (*s != '\0')
        {
            _putchar(*s);
            _puts_recursion(s + 1);
        }
    else
        {
            putchar('\n');
        }
}