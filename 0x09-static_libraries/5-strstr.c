#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be searched for
 * Return: is successful, pointer to beginning of located substring
 * otherwise, null value
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;

	char *n = needle;

	while (*h)
	{
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
