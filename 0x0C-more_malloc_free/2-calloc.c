#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fill memory with a constant byte
 * @s: memory area filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element in the array
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *dfg;

	if (nmemb == 0 || size == 0)
		return (NULL);

	dfg = malloc(size * nmemb);

	if (dfg == NULL)
		return (NULL);

	_memset(dfg, 0, nmemb * size);

	return (dfg);
}

