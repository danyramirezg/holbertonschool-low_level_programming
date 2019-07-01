#include <stdio.h>
/**
 * main -Prints all possible different combinations of two digits.
(*
 * Return: void
 */
int main(void)
{
	int j = '0';
	int k = '0';

	while (j <= '9')
	{
		while (k <= '9')
		{
			if (!(j > k || j == k))
			{
				putchar(j);
				putchar(k);
				if (j == '8' && k == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			k++;
		}
		k = '0';
		j++;
	}
	return (0);
}
