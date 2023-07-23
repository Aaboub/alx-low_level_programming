#include "main.h"

/**
 *  print_most_numbers- Entry
 *
 * Return: void
 */
void print_most_numbers(void)
{
	short i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar('0' + i);
	}
		_putchar('\n');
}
