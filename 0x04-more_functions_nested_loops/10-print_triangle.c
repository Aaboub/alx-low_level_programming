#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Entry
 *
 * @size: param
 *
 * Return: void
 */
void print_triangle(int size)
{
	short i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		k = size - i;
		for (j = 1; j <= size; j++)
		{
			if (j <= k)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
