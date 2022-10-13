#include "variadic_functions.h"

/**
 * print_numbers - function prints nos. followed by new line
 * @separator: string seperator
 * @n: arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	register unsigned int m;
	va_list nl;

	va_start(nl, n);
	for (m = 0; m < n; ++m)
			printf("%i%s", va_arg(nl, int), (separator && m != n - 1) ? separator : "");
	va_end(nl);
	printf("\n");
}
