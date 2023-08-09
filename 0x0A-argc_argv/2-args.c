#include <stdio.h>

/**
 * main - Entry
 *
 * @arc: param
 * @arv: param
 *
 * Return: int
 */
int main(int arc, char **arv)
{
	int i;

	for (i = 0; i < arc; i++)
	{
		printf("%s\n", arv[i]);
	}
	return (0);
}
