#include "main.h"
#include <ctype.h>

/**
 * _islower - is lower
 *
 * Description: desc
 * @c: input
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
