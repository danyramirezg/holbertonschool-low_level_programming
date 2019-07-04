#include <stdio.h>
#include "holberton.h"
/**
 * _strncat - concatenates two strings. It will use at most n bytes from src
 * @dest: The function´s parameter
 * @src: The function´s parameter
 * @n: bytes from src
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int s = 0;
int i = 0;
while (dest[s] != '\0')
{
s++;
}
while (src[i] != '\0' && src[i] < n)
{
dest[s + i] = src[i];
i++;
}
dest[s + i] = '\0';
return (dest);
}
