#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - A function that returns the sum of all its paramters.
 * @n: The number of paramters passed into the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ab;
	unsigned int j, sum = 0;

	va_start(ab, n);

	for (j = 0; j < n; j++)
		sum += va_arg(ab, int);

	va_end(ab);

	return (sum);
}

