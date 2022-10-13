#include "variadic_functions.h"

/**
 * print_strings - function to print strings
 * @separator: string to be displayed
 * @n: number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int m;
	char *stri;

	va_start(valist, n);

	for (m = 0; m < n; ++m)
	{
		stri = va_arg(valist, char *);

		if (stri)
			printf("%s", stri);
		else
			printf("(nil)");
		if (m < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
