#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * size - To find the size of the string
 * @str: Argument for the char
 *
 * Return: The pointer - result.
 */

	unsigned int size(char *str)
	{
	unsigned int i;

	if (str == NULL)
	{
	return (0);
	}
	i = 0;
	while (*str)
	{
	i++;
	str++;
	}
	return (i);
}
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int size1, size2, i, j;
	char *result;

	size1 = size(s1);
	size2 = size(s2);
	result = malloc(size1 + size2 + 1);

if (n >= size2)
{
n = size2;
}
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < size1; i++)
{
result[i] = s1[i];
}
for (j = 0; j < n; j++)
{
result[i + j] = s2[j];
}
result[i + j] = '\0';
return (result);
}
