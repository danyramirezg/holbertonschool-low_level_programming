#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a = 0;
	int b_d;
	int c_d;
	int d_d;

	while (a <= 999)
	{
		b_d = (a / 100 + '0');
		c_d = (a / 10 % 10 + '0');
		d_d = (a % 10 + '0');

		if ((b_d < c_d) && (c_d < d_d))
		{
			putchar(b_d);
			putchar(c_d);
			putchar(d_d);

			if (a != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
			a++;
		}
putchar('\n');
return (0);
}

