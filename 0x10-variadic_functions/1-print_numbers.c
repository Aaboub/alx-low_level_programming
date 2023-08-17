#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints a name
 *
 * @separator: sep
 * @n: param
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);

	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i < ((int)n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
