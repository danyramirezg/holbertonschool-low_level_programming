#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

char* itoa(int i, char b[]){
    char const digit[] = "0123456789";
    char* p = b;
    if(i<0){
        *p++ = '-';
        i *= -1;
    }
    int shifter = i;
    do{ //Move to where representation ends
        ++p;
        shifter = shifter/10;
    }while(shifter);
    *p = '\0';
    do{ //Move back, inserting digits as u go
        *--p = digit[i%10];
        i = i/10;
    }while(i);
    return b;
}

int _printf(const char *format, ...) {
  va_list args;
  bool control = false;
  char control_char;
  int written = 0;
  char* str;
  char ch;
  int i;
  char* buf;
  va_start(args, format);

  buf = (char*) malloc(33);

  while (*format != '\0') {
    if (!control) {
      if (*format != '%') {
        written += write(0, format, 1);
      } else {
        control = true;
      }
    } else {
      control = false;
      if (*format == '%') {
          written += write(0, format, 1);
      } else if (*format == 'c') {
        ch = va_arg(args, int);
        written += write(0, &ch, 1);
      } else if (*format == 's') {
        str = va_arg(args, char*);
        written += write(0, str, strlen(str));
      } else if (*format == 'd' || *format == 'i') {
        i = va_arg(args, int);
        itoa(i, buf);
        written += write(0, buf, strlen(buf));
      }
    }
    format++;
  }

  free(buf);
  return written;
}
