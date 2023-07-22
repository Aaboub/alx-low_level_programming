#include "main.h"

/**
 * print_sign - print_sign
 *
 * Description: desc
 * @c: input
 *
 * Return: 0 or 1
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
