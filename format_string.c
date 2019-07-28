#include <stdio.h>
#include <stdlib.h>

/**
 *_memcpy - program thisgs
 *Result: always return 0
 *@dest: variable de entrada
 *@src: variable entrada
 *@n: variable entrada
 *Return: value depending on function
 */

int *_memcpy(int *dest, int *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}

/**
 *_strlen - program thisgs
 *Result: always return 0
 *@s: variable de entrada
 *Return: value depending on function
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}

/**
 *format_string - encuentra la posicion de formatos de string
 *Result: always return 0
 *@s: string de entrada
 *Return: un puntero con la posicion de cada formato encontrado
 */
int *format_string(char *s)
{
	int i = 0, j = 0, k = 0, c = 0, exitflag = 0;
	int *auxposformat, *posformat;
	unsigned int index = 0;
	char format[3] = "csd";

	if (s == NULL)
		return (NULL);
	auxposformat = malloc(sizeof(int) * _strlen(s));
	if (auxposformat == NULL)
		return (NULL);
	while (s[i])
	{
		exitflag = 0;
		if (s[i] == '%')
		{
			j = i + 1;
			for (; s[j] != '\0'; j++)
			{
				if (s[j] == '%')
				{
					i = j + 1;
					break;
				}
				for (k = 0; k <= 2; k++)
				{
					if (s[j] == format[k])
					{
						auxposformat[index] = i, index++, exitflag = 1;
						break;
					}
				}
				if (exitflag)
					break;
			}
		} i++;
	} posformat = malloc(sizeof(int) * index);
	if (posformat == NULL)
		return (NULL);
	posformat = _memcpy(posformat, auxposformat, index), free(auxposformat);
	return (posformat);
}
