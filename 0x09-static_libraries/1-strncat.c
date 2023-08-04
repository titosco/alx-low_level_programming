#include "main.h"
/**
 * _strncat - function concatenate two strings
 * using at most n bytes from src
 * @dest: enter the  value
 * @src: enter the  value
 * @n: enter the  value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;

a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
