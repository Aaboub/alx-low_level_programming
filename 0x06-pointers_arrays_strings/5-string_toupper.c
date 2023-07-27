#include <string.h>
#include <ctype.h>

/**
 * string_toupper - Entry point
 *
 * @s: param
 *
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	int i;
	int len = (int)strlen(s);

	for (i = 0; i < len; i++)
	{
		s[i] = toupper(s[i]);
	}
	return (s);
}
