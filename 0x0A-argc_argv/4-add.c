#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Program that adds positive numbers
 * @argc: A count of the arguments.
 * @argv: To refer to an array of strings.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum, result;

	sum = 0;
	if (argc < 1)
		printf("%d\n", 0);
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{

			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		result = atoi(argv[argc]);
		sum += result;
	}
	printf("%d\n", sum);
	return (0);
}
