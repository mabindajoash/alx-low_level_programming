#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: string to be appended on
 * @src: source string to be appended onto dest
 * @n: number of bytes from src to be appended on dest
 * Return: pointer to resulting dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
