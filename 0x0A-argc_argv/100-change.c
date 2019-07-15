#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * valid - validates the input
 * @argc: argument count
 * @i: counter for argv[]
 * @j: counter for argv[][]
 * @argv: argument vector
 * Return: 0 or 1.
 */
int valid(int argc, int i, unsigned int k, char *argv[])
{
for (i = 1; i <= argc; i++)
	for (k = 0; argv[i] != 0 && k < strlen(argv[i]); k++)
		if (isdigit(argv[i][k]) == 0)
			return (1);
return (0);
}
/**
 * main - Find the number of counts
 * @argc: argument count
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
unsigned int cents;
int coins;

cents = coins = 0;
if (argc == 2)
{
	if (argv[1][0] == '-')
		printf("0\n");
	if (valid(argc, 1, 0, argv) == 0)
	{
	cents = atoi(argv[1]);
	for ( ; cents >= 25; coins++, cents -= 25)
	;
	for ( ; cents >= 10; coins++, cents -= 10)
	;
	for ( ; cents >= 5; coins++, cents -= 5)
	;
	for ( ; cents >= 2; coins++, cents -= 2)
	;
	for ( ; cents >= 1; coins++, cents--)
	;
	printf("%d\n", coins);
	}
}
	else
		printf("Error\n");
	return (0);
}
