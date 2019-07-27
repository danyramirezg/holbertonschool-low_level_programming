#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include "variadic_functions.h"
/**
 * is_ok - Function boolean to see if is true or false
 * @fmt: The function's parameter 
 *
 * Return: A boolean
 */

bool is_ok(const char fmt) 
{
	return (fmt == 'c' || fmt == 'i' || fmt == 'f' || fmt == 's');
}

/**
 * print_all - Function that prints anything
 * @format: A list of types of arguments
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...) 
{
	int i;
	double f;
	char* str;
	const char* fmt = format;
	int first = 1;
	va_list args;
	va_start(args, format);
 
	while (*fmt != '\0' && (is_ok(*fmt) || fmt++))
	{
        if (!first && is_ok(*fmt))
	{ 
		printf(", ");
        } 
        while (first)
	{
		first = 0;
	}
	switch (*fmt)
	{
	case 'i':
	i = va_arg(args, int);
		printf("%d", i);
		fmt++;
		continue;
	case 'c':
	i = va_arg(args, int);
		printf("%c", i);
		fmt++;
		continue;
          case 'f':
            f = va_arg(args, double);
            printf("%f", f);
            fmt++;
            continue;
          case 's':
            str = va_arg(args, char*);
            if (str == NULL) {
              printf("(nil)");
              fmt++;
              continue;
            } 
            printf("%s", str);
            fmt++;
            continue;
        }
    }
 
    va_end(args);
putchar(10);
}
