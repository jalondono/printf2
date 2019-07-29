#include "holberton.h"
/**
 * print_integer - print integer
 * @valist: integer to be print
 * @format: format to print
 * Return: count of bytes printed
 */
int print_integer_d (va_list valist)
{

        if(number<0){
        putchar('-');
        number = -number;
        }
        if(number / 10)
                printd(number / 10);
        putchar(number % 10 + '0');
        while(number/10>0)
        {
        number=number/10;
        result++;
        }
        return (result);
}
