#include "main.h"

/**
 * more_numbers - Entry
 *
 * Return: void
 */
void more_numbers(void)
{
	short i, j, x, y;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			x = j / 10;
			y = j % 10;
			if (x != 0)
				_putchar('0' + x);
			_putchar('0' + y);
		}
		_putchar('\n');
	}
}
