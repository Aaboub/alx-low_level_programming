#include "main.h"
#include <ctype.h>

/**
 * _isalpha - is alpha
 *
 * Description: desc
 * @c: input
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
