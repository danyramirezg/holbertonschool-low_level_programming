#include <stdio.h>
/**
 * rev_string - Function that reverses a string.
 * @s: The function's parameter
 * 
 * Return: void.
 */
void rev_string(char *s)
{
int i, j;
char c;
for (i = '\0'; s[i] != 0; i++)
{
}
j = 0;
for (i = i - 1; j < i; j++)
{
c = s[i];
s[i] = s[j];
s[j] = c;
i--;
}
}
