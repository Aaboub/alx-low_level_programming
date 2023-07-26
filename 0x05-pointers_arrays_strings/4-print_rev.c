#include <string.h>
#include "main.h"

/**
 * print_rev - Entry
 *
 * @s: param
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = (int)strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
