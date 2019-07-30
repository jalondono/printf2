#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 *_printf - print whatever
 *Result: a size of string to print
 *@format: string to printf
 *Return: value depending on function
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	int value = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				value = select_format(format[i + 1], args);
				j = value + j;
				i++;
			}
			else
				return (-1);
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
		i++;
	}
	va_end(args);
	return (j);
}
