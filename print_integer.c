#include "holberton.h"
/**
 * print_integer_d - print integer
 * @number: integer to be printt
 * Return: count of bytes printed
 */

int print_integer_d(int number)
{
	int result = 0;

	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}
	if (number / 10)
		print_integer_d(number / 10);
	_putchar(number % 10 + '0');

	while (number / 10 > 0)
	{
		number = number / 10;
		result++;
	}
	return (result + 1);
}
