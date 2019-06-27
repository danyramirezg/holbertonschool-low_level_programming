#include "holberton.h"
/**
 * _isupper - checks for uppercase character
 * @c: charater
 *
 * Return: 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
