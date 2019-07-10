#include <stdio.h>
#include "holberton.h"
/**
 * factorial - Function that returns the factorial of a number.
 * @n: The function´s parameter (integer)
 *
 * Return: The factorial.
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n <= 1)
{
return (1);
}
return (n* factorial(n-1));
}


