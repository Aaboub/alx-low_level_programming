#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _pow_recursion - Entry point
 *
 * @x: param
 * @y: param
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
