#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get end of the input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int j, bi;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = bi = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[bi] != '\0')
		bi++;
	conct = malloc(sizeof(char) * (j + bi + 1));

	if (conct == NULL)
		return (NULL);
	j = bi = 0;
	while (s1[j] != '\0')
	{
		conct[j] = s1[j];
		j++;
	}

	while (s2[bi] != '\0')
	{
		conct[j] = s2[bi];
		j++, bi++;
	}
	conct[j] = '\0';
	return (conct);
}

