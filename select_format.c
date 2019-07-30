#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *select_format - program thisgs
 *Result: always return 0
 *@args: variable de entrada
 *@format : formato of string
 *Return: value depending on function
 */
int select_format(char format, va_list args)
{
	char *result;
	int size = 0;

	switch (format)
	{
	case 'c':
		_putchar(va_arg(args, int));
		size = 1;
		break;
	case 's':
		result = print_string(args);
		if (result == NULL)
		{
			_puts("(NULL)");
			size = 6;
			break;
		}
		_puts(result);
		size = _strlen(result);
		break;
	case '%':
		_putchar('%');
		size = 1;
	case 'd':
		break;
	case 'i':
		break;
	default:
		_putchar('%');
		_putchar(format);
		break;
	}
	return (size);
}