#include <stdio.h>
/**
 * main - Program that prints its name.
 * @argc: A count of the arguments.
 * @argv: To refer to an array of strings.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
