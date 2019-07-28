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

const char* move_next(const char* fmt) 
{
	while (*fmt != '\0' && !is_ok(*fmt)) 
	{
	fmt++;
  	}
	return (fmt);
}

const char* print_and_advance(const char* fmt, va_list args) 
{
	int i;
	double f;
	char* str;
	switch (*fmt) 
	{
	case 'i':
	i = va_arg(args, int);
	printf("%d", i);
	break;
	case 'c':  
	i = va_arg(args, int);
	printf("%c", i);
	break;
	case 'f':
	f = va_arg(args, double);
	printf("%f", f);
	break;
	case 's':
	str = va_arg(args, char*);
	if (str == NULL) 
{
	printf("(nil)");
	break;
} 
	printf("%s", str);
	break;
}
	return ++fmt;
}
/**
 * print_all - Function that prints anything
 * @format: A list of types of arguments
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...) 
{

const char* fmt = format;
va_list args;
va_start(args, format);

fmt = move_next(fmt);
if (*fmt != '\0') 
{
fmt = print_and_advance(fmt, args);
}
while (*(fmt = move_next(fmt)) != '\0') 
{
printf(", ");
fmt = print_and_advance(fmt, args);
} 
va_end(args);
putchar(10);
}
