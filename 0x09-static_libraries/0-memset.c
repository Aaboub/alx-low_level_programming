#include <string.h>
#include "main.h"

/**
 * _memset - Entry point
 *
 * @s: param
 * @b: param
 * @n: param
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
