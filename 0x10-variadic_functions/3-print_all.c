#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * move_next - To through the string.
 * @fmt: The function's parameter
 *
 * Return: The format
 */
const char *move_next(const char *fmt)
{

while (*fmt != '\0' && !(*fmt == 'c' || *fmt == 'i'
	|| *fmt == 'f' || *fmt == 's'))
{
	fmt++;
	}
	return (fmt);
}

/**
 * print_and_advance - Function that prints
 * @fmt: The format.
 * @args: The list's arguments
 *
 * Return: The formate.
 */
const char *print_and_advance(const char *fmt, va_list args)
{
	char *str;
	float f;
	
	switch (*fmt)
	{
	case 'i':
	printf("%d", va_arg(args, int));
	break;
	case 'c':
	printf("%c", va_arg(args, int));
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


	return (++fmt);
}
/**
 * print_all - Function that prints anything
 * @format: A list of types of arguments
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	const char *fmt = format;
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
