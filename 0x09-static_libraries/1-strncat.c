#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: pointer to string to be concatenated on
 * @src: source string to be appended
 * @n: number of bytes from src to be appended to dest
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len++] = src[i];
	dest[dest_len++] = '\0';

	return (dest);
}
