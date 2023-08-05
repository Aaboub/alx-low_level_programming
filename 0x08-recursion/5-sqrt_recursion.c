#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _sqrt - Entry
 *
 * @n: param
 * @i: param
 *
 * Return: int
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	i++;
	return (_sqrt(n, i));
}

/**
 * _sqrt_recursion - Entry point
 *
 * @n: param
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
