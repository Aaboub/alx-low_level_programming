#include "main.h"

/**
 * times_table - test
 * return: void
 */
void times_table(void)
{
	short i, j, p, x, y;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = i * j;
			x = p / 10;
			y = p % 10;
			if (j != 0)
			{
				if (x == 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('0' + x);
				}
			}
			_putchar('0' + y);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
