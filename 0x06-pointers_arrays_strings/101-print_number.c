#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * print_number - Entry point
 *
 * @n: param
 *
 * Return: pointer to string
 */
void print_number(int n)
{
	int i = 0;
	int j;
	int k;
	int tmp;
	int l;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	tmp = n;

	while (n > 0)
	{
		i++;
		n = n / 10;
	}

	k = 1;
	for (j = 1; j < i; j++)
	{
		k = k * 10;
	}

	while (tmp > 0)
	{
		l = tmp / k;
		_putchar('0' + l);
		tmp = tmp - (l * k);
		if (tmp == 0)
			_putchar('0');
		k = k / 10;
	}
}
