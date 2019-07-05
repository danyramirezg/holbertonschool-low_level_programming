#include "holberton.h"
/**
 * _strcmp - Compares two strings
 * @s1: String 1 (Function's parameter)
 * @s2: String 2 (Function's parameter)
 *
 * Return: 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
