#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print_sign
 *
 * Description: desc
 * @c: input
 *
 * Return: 0 or 1
 */
int print_last_digit(int c)
{
	int l;

	l = abs(c) % 10;
	_putchar('0' + l);
	return (l);
}
