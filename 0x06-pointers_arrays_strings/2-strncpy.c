#include <string.h>

/**
 * _strncpy - Entry point
 *
 * @dest: param
 * @src: param
 * @n: param
 *
 * Return: pointer to string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
