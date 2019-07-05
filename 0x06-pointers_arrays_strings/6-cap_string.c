#include "holberton.h"
#include <stdio.h>
/**
 * *cap_string - capitalizes all words of a string.
 *
 * Return: Always 0.
 */
char *cap_string(char *n)
{
int i;
int k = 0;
for (i = 0; n[i] != 0; i++)
{
if (n[i] == ' ' || n[i] == '\t' || n[i] == '\n'
|| n[i] == ',' || n[i] == ';' || n[i] == '.'
|| n[i] == '!' || n[i] == '?' || n[i] == '"'
|| n[i] == '(' || n[i] == ')' || n[i] == '{'
|| n[i] == '}')
{
k = 1;
}
else if ((n[i] >= 97 && n[i] <= 122 && k == 1) || (n[0] >= 97 && n[0] <= 122))
{
n[i] = n[i] - 32;
k = 0;
}
else
{
k = 0;
}
}
return (n);
}
