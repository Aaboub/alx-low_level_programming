#include <string.h>
#include "main.h"

/**
 * _strspn - Entry point
 *
 * @s: param
 * @accept: param
 *
 * Return: pointer
 */
unsigned int _strspn(char *s, char *accept);
{
	return (strspn(s, accept));
}
