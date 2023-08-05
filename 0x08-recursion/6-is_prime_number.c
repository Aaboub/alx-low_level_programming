#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _prime - Entry
 *
 * @n: param
 * @i: param
 *
 * Return: int
 */
int _prime(int n, int i)
{
	if (i >= n)
		return (1);
	if (n % i == 0)
		return (0);
	i++;
	return (_prime(n, i));
}

/**
 * is_prime_number - Entry point
 *
 * @n: param
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}
