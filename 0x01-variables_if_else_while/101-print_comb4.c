#include <stdio.h>
/**
* main - Prints all possible different combinations of three digits.
*
* Return: void
*/
int main(void)
{
int a = 0;
int d;
int c;
int b;
while (a <= 999)
{
b = (a / 100 + '0');
c = (a / 10 % 10 + '0');
d = (a % 10 + '0');
if ((b < c)&&(c < d))
{
putchar(b);
putchar(c);
putchar(d);
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
