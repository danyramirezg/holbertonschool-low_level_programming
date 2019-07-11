#include "holberton.h"
#include <stdio.h>

/**
 * validation - validate the input number from n to the base
 * @n: The squared number
 * @base: The base number
 * Return: validation
 */
int validation(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (validation(n + 1, base));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Parameter to check square roots.
 * Return: The natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (validation(1, n));
}


