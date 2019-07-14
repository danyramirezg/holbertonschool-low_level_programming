#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_number - checks if is a number
 * @str: The function's parameter.
 *
 * Return: True or false depends of the case.
 */

bool is_number(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (!isdigit(str[i]))
{
return (false);
}
}
return (true);
}

/**
 * main - Program that adds positive numbers
 * @argc: A count of the arguments.
 * @argv: The function's parameter.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i, sum;
sum = 0;
for (i = 1; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (0);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
