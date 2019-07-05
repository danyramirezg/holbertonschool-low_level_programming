#include "holberton.h"
#include <stdio.h>
/**
 * *leet - Function that encodes a string into 1337.
 * @s: The function's parameter
 *
 * Return: Character s.
 */
char *leet(char *s)
{
	int a;
	int b;
	char r[] = "aAeEoOtTlL";
	char l[] = "43071";

	a = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; r[b] != '\0'; b++)
			if (s[a] == r[b])
				s[a] = l[b / 2];
	}
	return (s);
}
