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
	long sum = 0, val;
	int i;
	char *end;

	for (i = 1; i < arc; i++)
	{
		val = strtol(arv[i], &end, 10);
		if (arv[i] == end || *end != '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += val;
	}
	printf("%ld\n", sum);
	return (0);
}
