#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * puts2 - Entry
 *
 * @s: param
 *
 * Return: void
 */
void puts2(char *s)
{
	int len = (int)strlen(s);
	int i;

	for (i = 0; i < len ; i = i + 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
