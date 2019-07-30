#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 *print_string - substrac de list value into pointer to char
 *Result: always return 0
 *@value: variable de entrada
 *Return: an pointer to charn
 */
char *print_string(va_list value)
{
	char *stringout;

	stringout = va_arg(value, char *);
	return (stringout);
}
