#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: thelist of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *a, *b = "";


	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", b, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", b, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", b, va_arg(args, double));
					break;
				case 's':
					a = va_arg(args, char *);
					if (!a)
						a = "(nil)";
					printf("%s%s", b, a);
					break;
				default:
					i++;
					continue;
				}
			b = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
