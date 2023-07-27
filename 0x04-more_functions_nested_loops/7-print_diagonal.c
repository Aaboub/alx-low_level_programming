#include "main.h"

/**
 * print_diagonal - Entry
 *
 * @n: param
 *
 * Return: void
 */
void print_diagonal(int n)
{
	short i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');

	}
}
