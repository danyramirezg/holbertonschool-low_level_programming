#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * char*_strdup - Returns a pointer to a newly allocated space..
 * @str: Argument for the char
 *
 * Return: p
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	;
	i++;
	if (i < 1)
		return (NULL);
	p = malloc(i * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		p[j] = str[j];
	p[j] = '\0';
	return (p);
}
