#include <string.h>
#include <ctype.h>
#include <stdio.h>

/**
 * leet - Entry point
 *
 * @s: param
 *
 * Return: pointer to string
 */
char *leet(char *s)
{
	int i, j;
	int len = (int)strlen(s);
	char min[] = {'a', 'e', 'o', 't', 'l'};
	char maj[] = {'A', 'E', 'O', 'T', 'L'};
	char enc[] = {'4', '3', '0', '7', '1'};

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == min[j] || s[i] == maj[j])
			{
				s[i] = enc[j];
				break;
			}
		}
	}
	return (s);
}
