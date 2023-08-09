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
	int val, d, r, res = 0;

	if (arc < 2)
	{
		printf("Error\n");
		return (1);
	}
	val = atoi(arv[1]);
	if (val <= 0)
	{
		printf("0\n");
		return (0);
	}

	d = val / 25;
	res += d;
	r = val % 25;
	d = r / 10;
	res += d;
	r = r % 10;
	d = r / 5;
	res += d;
	r = r % 5;
	d = r / 2;
	res += d;
	r = r % 2;
	res += r;

	printf("%d\n", res);
	return (0);
}
