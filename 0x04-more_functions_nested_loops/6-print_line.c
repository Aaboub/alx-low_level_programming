#include "main.h"

/**
 * print_line - Entry
 *
 * @a: param
 *
 * Return: void
 */
void print_line(int a)
{
	short i;

	for (i = 0; i < a; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
