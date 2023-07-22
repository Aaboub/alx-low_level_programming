#include "main.h"
#include <stdio.h>

/**
 * print_mul - test
 *
 * return: void
 */
void print_mul(void)
{
	short i;
	int sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
}
