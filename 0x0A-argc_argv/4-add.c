#include <stdio.h>
#include <stdlib.h>

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
	long sum = 0;
	int i;
	char *endptr;
	long val;

	for (i = 1; i < arc; i++)
	{
		val = strtol(arv[i], &endptr, 10);
		if (arv[i] == endptr)
		{
			printf("Error\n");
			return (1);
		}
		sum += val;
	}
	printf("%ld\n", sum);
	return (0);
}
