#include<ctype.h>

/**
 * _isupper - Entry
 *
 * @c: input
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (isupper(c) == 0)
		return (0);
	else
		return (1);
}
