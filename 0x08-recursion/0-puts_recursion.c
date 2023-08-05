#include "main.h"

/**
 * _puts_recursion - Entry point
 *
 * @s: param
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		return;
	}
	_putchar('\n');
}
