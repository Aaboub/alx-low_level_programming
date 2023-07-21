#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 * return: void
 */
void print_alphabet_x10(void)
{
	char a;
	short i;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
