#include <string.h>
#include <ctype.h>

/**
 * cap_string - Entry point
 *
 * @s: param
 *
 * Return: pointer to string
 */
char *cap_string(char *s)
{
	int i;
	int len = (int)strlen(s);

	s[0] = toupper(s[0]);

	for (i = 1; i < len; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';'
				|| s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"'
				|| s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			s[i + 1] = toupper(s[i + 1]);
		}
	}
	return (s);
}
