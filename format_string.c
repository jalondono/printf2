#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}

int* format_string(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int c = 0;
	int index = 0;
	int exitflag = 0;
	char format[3] = "csd";
	int *posformat;

	if (s == NULL)
		return (NULL);

	posformat = malloc(sizeof(int) * _strlen(s));
	if (posformat == NULL)
		return (NULL);
	while (s[i])
	{
		exitflag = 0;
		if(s[i] == '%')
		{
			for (; s[j] != '\0'; j++)
			{
				j = i + 1;
				if (s[j] == '%')
				{
					i = j + 1;
					break;
				}
				for (k = 0; k <= 2; k++)
				{
					if (s[j] == format[k])
					{
						posformat[index] = i;
						index++;
						exitflag = 1;
						break;
					}
				}
				if (exitflag)
					break;
			}
		}

		i++;
	}
}

int main()
{
	int *posformat;
	posformat = format_string("ab %s t %d %c y%c");
	if (posformat != NULL)
	{
		printf("%d, %d", posformat[0], posformat[1]);
		free(posformat);
	}

	return 0;
}
