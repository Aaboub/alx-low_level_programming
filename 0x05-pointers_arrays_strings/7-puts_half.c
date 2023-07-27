#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * puts_half - Entry
 *
 * @s: param
 *
 * Return: void
 */
void puts_half(char *s)
{
	int len = (int)strlen(s);
	int i, half;

	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len - 1) / 2;

	for (i = half; i < len ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
