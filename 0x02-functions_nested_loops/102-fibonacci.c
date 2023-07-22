#include <stdio.h>

/**
 * main - test
 *
 * Return: Always 0
 */
int main(void)
{
	short i;
	long fib1, fib2, tmp;

	fib1 = 1;
	printf("%ld, ", fib1);
	fib2 = 2;
	printf("%ld, ", fib2);
	for (i = 3; i <= 50; i++)
	{
		tmp = fib1 + fib2;
		printf("%ld", tmp);
		if (i != 50)
			printf(", ");
		fib1 = fib2;
		fib2 = tmp;
	}
	printf("\n");
	return (0);
}
