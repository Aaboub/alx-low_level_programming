#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Entry point
 *
 * @a: param
 * @size: param
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0, k = 0, sum1 = 0, sum2 = 0;
	int tmp = size - 1;


	for (i = 1; i <= (size * size); i++)
	{
		if (j == k)
		{
			sum1 += a[i - 1];
		}
		if (j == tmp)
		{
			sum2 += a[i - 1];
			tmp--;
		}

		j++;
		if (i % size == 0)
		{
			j = 0;
			k++;
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
