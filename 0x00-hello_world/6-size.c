#include <stdio.h>

/**
 * main - Entry point
 *
 */

int main(void)
{
	char c;
	int a;
	long l;
	long long lo;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(a));
	printf("Size of a long int: %ld byte(s)\n", sizeof(l));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lo));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
