#include "variadic_functions.h"

/**
 * print_all - function that displays antything
 * @format: data type format
 */
void print_all(const char * const format, ...)
{
	unsigned int m = 0;
	char  *str, *sep = "";
	va_list arguments;

	va_start(arguments, format);
	if (format)
	{
		while (format[m])
		{
			switch (format[m])
			{
				case 'c':
					printf("%s%c", sep, va_arg(arguments, int));
					break;
				case 'i':
					printf("%s%i", sep, va_arg(arguments, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(arguments, double));
					break;
				case 's':
					str = va_arg(arguments, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					++m;
					continue;
			}
		sep = ", ";
		++m;
		}
	}
	printf("\n");
	va_end(arguments);
}


