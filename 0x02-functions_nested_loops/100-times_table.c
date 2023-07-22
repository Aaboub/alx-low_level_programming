#include "main.h"

/**
 * print_times_table - test
 *
 * @n: n
 *
 * return: void
 */
void print_times_table(int n)
{
	short i, j, p, x, y, z;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			p = i * j;
			x = p / 100;
			y = (p / 10) % 10;
			z = p % 10;
			if (j != 0)
			{
				if (x == 0)
					_putchar(' ');
				else
					_putchar('0' + x);
				if (x == 0 && y == 0)
					_putchar(' ');
				else
					_putchar('0' + y);
			}
			_putchar('0' + z);
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
