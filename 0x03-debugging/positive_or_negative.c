#include <stdio.h>

/**
 * positive_or_negative - Entry point
 *
 * Return: void
 */
void positive_or_negative(int n)
{
	printf("%d ", n);
	if (n == 0)
	{
		printf("is zero\n");
	}
	else if (n < 0)
	{
		printf("is negative\n");
	}
	else
	{
		printf("is positive\n");
	}
}
