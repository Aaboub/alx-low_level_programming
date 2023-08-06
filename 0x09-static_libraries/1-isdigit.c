#include<ctype.h>

/**
 * _isdigit - Entry
 *
 * @c: input
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (isdigit(c) == 0)
		return (0);
	else
		return (1);
}
