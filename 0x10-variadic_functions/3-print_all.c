#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints a name
 *
 * @format : param
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *sep = "";
	char *tmp;

	va_start(ap, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				tmp = va_arg(ap, char*);
				if (tmp)
					printf("%s%s", sep, tmp);
				else
					printf("%s(nil)", sep);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}

	printf("\n");
	va_end(ap);
}
