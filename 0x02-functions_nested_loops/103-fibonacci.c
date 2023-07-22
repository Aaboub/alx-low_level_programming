#include <stdio.h>

/**
 * main - test
 *
 * Return: Always 0
 */
int main(void)
{
	long fib1, fib2, tmp;
	long sum = 2;

	fib1 = 1;
	fib2 = 2;
	tmp = fib1 + fib2;
	while (tmp < 4000000)
	{
		if (tmp % 2)
			sum += tmp;
		fib1 = fib2;
		fib2 = tmp;
		tmp = fib1 + fib2;
	}
	printf("%ld\n", sum);
	return (0);
}
