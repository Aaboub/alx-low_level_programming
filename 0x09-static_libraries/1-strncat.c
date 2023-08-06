#include <string.h>

/**
 * _strncat - Entry point
 *
 * @dest: param
 * @src: param
 * @n: param
 *
 * Return: pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
