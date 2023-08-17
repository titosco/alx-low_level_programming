#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - A function that prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *sep, *str = "";

	va_list index;

	va_start(index, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", str, va_arg(index, int));
					break;
				case 'i':
					printf("%s%d", str, va_arg(index, int));
					break;
				case 'f':
					printf("%s%f", str, va_arg(index, double));
					break;
				case 's':
					sep = va_arg(index, char *);
					if (!sep)
						sep = "(nil)";
					printf("%s%s", str, sep);
					break;
				default:
					j++;
					continue;
			}
			str = ", ";
			j++;
		}
	}

	printf("\n");
	va_end(index);
}

