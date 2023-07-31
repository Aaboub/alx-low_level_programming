#include <string.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 *
 * @s: param
 * @accept: param
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
