#include "main.h"

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

	l = c % 10;
	_putchar('0' + l);
	return (c % 10);
}
