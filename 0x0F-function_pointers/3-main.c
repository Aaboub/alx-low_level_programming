#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: param
 * @argv: param
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int a, b;
	char *op;

	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (strcmp(op, "+") && strcmp(op, "-") && strcmp(op, "*") &&
			strcmp(op, "/") && strcmp(op, "%"))
	{
		printf("Error\n");
		return (99);
	}

	if ((!strcmp(op, "/") || strcmp(op, "%")) && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	
	p = get_op_func(op);
	printf("%d\n", p(a, b));
	return (0);
}
