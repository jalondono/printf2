#include "holberton.h"
/**
 * print_integer_d - print integer
 * @number: integer to be printt
 * Return: count of bytes printed
 */

int print_integer_d(int number)
{
	int result = 0;
	unsigned int aux = 0;
	int flag = 0;

	if (number < 0)
	{
		_putchar('-');
		aux = -number;
		flag = 1;
	}
	else
		aux = number;
	if (aux / 10)
	{
		print_integer_d(aux / 10);
	}
	_putchar(aux % 10 + '0');

	while (aux / 10 > 0)
	{
		aux = aux / 10;
		result++;
	}
	return (result + 1 + flag);
}
