#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: String to be printed between strings
 * @n: Number of strings passed
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);

	if (n == 0)
	{
		putchar(10);
		return;
	}
	for (i = 0; i < n; i++)
	{
	str = va_arg(list, char*);
	if (str == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", str);
	}
	if (separator == NULL)
	{
		continue;
	}
	else if (i < n - 1)
	{
	printf("%s", separator);
	}
}
va_end(list);
putchar(10);
}
