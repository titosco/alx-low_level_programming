#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values to be stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *tyg;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	tyg = malloc(sizeof(int) * size);

	if (tyg == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		tyg[j] = min++;

	return (tyg);
}

