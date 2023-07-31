#include <string.h>
#include "main.h"

/**
 * _strstr() - Entry point
 *
 * @haystack: param
 * @needle: param
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
