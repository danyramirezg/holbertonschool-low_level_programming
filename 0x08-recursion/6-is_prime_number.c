#include <stdio.h>
#include "holberton.h"

/**
  * is_prime_number - returns if the input is a prime number
  * @n: The function's parameter
  * Return: 1 or 0 (if is prime number or not)
  */
int is_prime_number(int n)
{
	return (validation(2, n));
}
/**
  * validation - validates
  * @n: The function's parameter
  * @base: The function's parameter
  * Return: 1 if n is a prime, else return 0 otherwise.
  */
int validation(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (validation(n + 1, base));
	return (1);
}
