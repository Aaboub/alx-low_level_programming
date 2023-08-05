#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * factorial - Entry point
 *
 * @n: param
 *
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
