#include "holberton.h"
#include <stdio.h>
/**
 * *rot13 - Function that encodes a string using rot13
 * @s: The function's parameter
 *
 * Return: Character s.
 */
char *rot13(char *s)
{
	int x, y;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char boolean;

	for (x = 0; s[x] != '\0'; x++)
	{
		boolean = 0;
		for (y = 0; input[y] != '\0' && boolean == 0; y++)
		{
			if (s[x] == input[y])
			{
				s[x] = output[y];
				boolean = 1;
			}
		}
	}
	return (s);
}

