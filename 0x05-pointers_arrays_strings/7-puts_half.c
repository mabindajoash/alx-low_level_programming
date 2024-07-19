#include <stdio.h>
#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: the string to be passed as a parameter
  * @Return: 0
  */
void puts_half(char *s)
{
	int len = 0;
	int i;
	char *str = s;

	/* find lenght*/
	while (str[len] != '\0')
	{
		len++;
	}
	if ((len % 2) != 0)
	{
		for (i = (len - 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = len / 2 ; i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
