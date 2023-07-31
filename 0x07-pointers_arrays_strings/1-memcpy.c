#include <string.h>
#include "main.h"

/**
 * _memcpy - Entry point
 *
 * @s: param
 * @b: param
 * @n: param
 *
 * Return: pointer
 */
char *_memcpy(char *s, char *b, unsigned int n)
{
	memcpy(s, b, n);
	return (s);
}
