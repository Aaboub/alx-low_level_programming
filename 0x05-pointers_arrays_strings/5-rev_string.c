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
	int len = (int)strlen(s);
	int i;
	char temp;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
