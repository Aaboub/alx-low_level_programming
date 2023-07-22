#include "main.h"

/**
 * jack_bauer - print alphabet
 * return: void
 */
void jack_bauer(void)
{
	short i, j, x, y;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			x = i / 10;
			y = i % 10;
			_putchar('0' + x);
			_putchar('0' + y);
			_putchar(':');
			x = j / 10;
			y = j % 10;
			_putchar('0' + x);
			_putchar('0' + y);
			_putchar('\n');
		}
	}
}
