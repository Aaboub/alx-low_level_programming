#include "stdio.h"
#include "stdbool.h"

/**
 * main - Entry point
 *
 * Description: alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	short a, b, c;
	bool f = false;

	for (a = 0; a <= 9; a++)
	{
		for (b = (a + 1); b <= 9; b++)
		{
			for (c = (b + 1); c <= 9; c++)
			{
				if (f)
				{
					putchar(',');
					putchar(' ');
				}
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				f = true;
			}
		}
	}
	putchar('\n');
	return (0);
}
