#include "main.h"

/**
 * _puts_recursion - is a function that prints a string
 *
 * @s: s is a pointer to an array
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
