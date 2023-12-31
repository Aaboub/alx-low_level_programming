#include <stdarg.h>
/**
 * sum_them_all - prints a name
 * @n: name of the person
 *
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < (int)n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
