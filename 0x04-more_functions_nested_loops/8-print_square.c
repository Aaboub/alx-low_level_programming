#include "main.h"

/**
 * print_square - Entry
 *
 * @size: param
 *
 * Return: void
 */
void print_square(int size)
{
	short i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			_putchar('#');
		_putchar('\n');
	}
}
