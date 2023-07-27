#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * rev_string - Entry
 *
 * @s: param
 *
 * Return: void
 */
void rev_string(char *s)
{
	char ss[10];
	int len = (int)strlen(s);
	int i, j;

	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		ss[j] = (*(s + i));
	}
	*s = *ss;
}
