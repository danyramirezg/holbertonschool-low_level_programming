#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - Concatenates two strings
 * @s1: Argument for the char
 * @s2: Argument for the char
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, j, k = 0, x = 0, y = 0, temp;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}

	temp = x + y + 1;
	c = (char *) malloc(temp * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < x; i++)
	{
		c[i] = s1[i];
	}
	for (j = i; j <= temp; j++)
	{
		c[j] = s2[k];
		k++;
	}
return (c);
}
