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
unsigned int min(unsigned int n1, unsigned int n2)
{
return (n1 < n2 ? n1 : n2);
}
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int size1, size2, i;
	int j;
	char *result;

	size1 = size(s1);
	size2 = min(size(s2), n);
	result = malloc(size1 + size2 + 1);
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < size1; i++)
{
result[j++] = s1[i];
}
for (i = 0; i < size2; i++)
{
result[j++] = s2[i];
}
result[j] = '\0';
return (result);
}
