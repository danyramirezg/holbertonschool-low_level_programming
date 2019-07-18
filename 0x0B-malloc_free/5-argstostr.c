#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - Concatenates all the arguments of the program
 * @ac: Argument for the int
 * @av: Argument for the char
 *
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
int i, j, siz, temp;
char *p;

	if (av == NULL)
		return (NULL);
	if (ac == 0)
		return (NULL);

	i = j = siz = temp = 0;
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			siz++;
	}
	p = (char *)malloc(siz * sizeof(char) + ac + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, temp++)
			p[temp] = av[i][j];
		p[temp] = '\n';
		temp++;
	}
	p[temp] = 0;
	return (p);

}
