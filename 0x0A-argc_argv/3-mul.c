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
	if (arc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(arv[1]) * atoi(arv[2]));
	return (0);
}
