#include <stdio.h>
#include "holberton.h"
/**
 * _strstr - Function that locates a substring.
 * @haystack: The function's parameter.
 * @needle: The function's parameter
 *
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *b = haystack;
char *p = needle;

while (*p == *haystack && *p != '\0' && *haystack != '\0')
{
haystack++;
p++;
}
if (*p == '\0')
return (b);
haystack = b + 1;
}
return ('\0');
}
