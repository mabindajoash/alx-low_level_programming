#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: charater to be located
 *Return: if successful, pointer to first occurence of character c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
