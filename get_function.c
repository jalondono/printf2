#include "holberton.h"

/**
 * getfunction- select the correct function to print that format
 * @format: format given
 *
 * Return: a pointer char to the function that corresponds to the format given
 */
char *get_function (char format, va_list value){

	switch (format[i])
		{
		case 'c':
			result = print_char.c
			break;
		case 's':
			result = print_string.c
			break;
		case 'd':
			result = print_integer.c
			break;
		case 'i':
			result = print_integer.c
			break;
		}
	return (result);
}
