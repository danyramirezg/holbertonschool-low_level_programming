#include <stdio.h>
#include "holberton.h"
/**
 * _strlen_recursion - Function that return the length of a string.
 * @s: The function´s parameter (Character)
 *
 * Return: The length of s
*/
int _strlen_recursion(char *s)
{
if (*s == 0)
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}

/**
 * brain - Is called to palindrome function
 * @s: The function's parameter
 * @i: The string's length
 * @j: The counter
 * Return: 1 or 0 (If is or not palindrome)
 */
int brain(char *s, int i, int j)
{
	if (j >= i)
		return (1);
	if (s[i] == s[j])
		return (brain(s, i - 1, j + 1));
	return (0);
}


/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: The funcion's parameter (string)
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);
	int j = 0;

	return (brain(s, i - 1, j));
}
