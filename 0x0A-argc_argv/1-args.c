#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints the number of arguments passed into it.
 * @argc: A count of the arguments.
 * @argv: To refer to an array of strings.
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	unsigned tmp __attribute__((unused));
	printf("%d\n", argc - 1);

	return (0);
}
