#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: The function's parameter
 * @size: The function's parameter.
 */

void print_diagsums(int *a, int size)
{
int i;
int count1;
int count2;
count1 = count2 = 0;
for (i = 0; i < (size * size); i += size + 1)
count1 += a[i];
for (i = size - 1; i < (size * size - 1); i += size - 1)
count2 += a[i];
printf("%d, %d\n", count1, count2);
}
