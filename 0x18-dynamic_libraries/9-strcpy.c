#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: value to evaluate
 * @src: value to evaluate
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;

	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		for (; n < i; n++)
		{
			dest[n] = src[n];
		}

	dest[i] = '\0';
	return (dest);
}
