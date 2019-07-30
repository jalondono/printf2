#ifndef _holberton_h_
#define _holberton_h_
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
void _puts(char *str);
int select_format(char format, va_list args);
char *print_string(va_list value);
int _strlen(char *s);
int *_memcpy(int *dest, int *src, unsigned int n);
int *format_string(char *s);
int print_integer_d(int number);
#endif
