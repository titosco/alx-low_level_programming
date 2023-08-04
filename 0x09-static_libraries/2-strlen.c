#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int longs = 0;

while (*s != '\0')
{
longs++;
s++;
}

return (longs);
}
