#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: The function´s parameter
 * @accept: The function´s parameter
 *
 * Return: count.
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int l;
unsigned int count;

for (l = 0; accept[l] != 0; l++)
{
}
for (i = 0; i <= l; i++)
{	
	for (j = 0; accept[j] != 0; j++)
{
		if (s[i] == accept[j])
{
	count++;
}
	else if (s[j] == 0)
	{
break;
}
}
}
return (count++);
}
