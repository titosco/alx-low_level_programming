#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Function that prints numbers, followed by a new line.
 * @separator: a string to be printed between numbers.
 * @n: number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list noms;
	unsigned int ints;

	va_start(noms, n);

	for (ints = 0; ints < n; ints++)
	{
		printf("%d", va_arg(noms, int));

		if (ints != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(noms);
}

