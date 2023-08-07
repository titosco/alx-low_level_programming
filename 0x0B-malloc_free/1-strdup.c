#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to a new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *abc;
	int j, i = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	abc = malloc(sizeof(char) * (j + 1));

	if (abc == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		abc[i] = str[i];

	return (abc);
}

