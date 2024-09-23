#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: memory copied to
 * @src: memory copied from
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	char *csrc = src;

	char *cdest = dest;

	while (n > 0)
	{
		cdest[i] = csrc[i];
		i++;
		n--;
	}
	return (dest);
}
