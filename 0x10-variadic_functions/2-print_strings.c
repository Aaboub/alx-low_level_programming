#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints a name
 *
 * @separator: sep
 * @n: param
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;
	char *s;

	va_start(ap, n);

	for (i = 0; i < (int)n; i++)
	{
		s = va_arg(ap, char*);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator && i < ((int)n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
