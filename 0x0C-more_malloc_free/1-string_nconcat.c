#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: number of bytes to be copied from string 2
  * Return: pointer to the newly allocated memory
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0;
	unsigned int i = 0;
	char *s;
	unsigned len1 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* find the lenght of s1*/
	while (s1[len])
		len++;
	while (s2[len1])
		len1++;
	if (n >= len1)
		n = len1;
	/* Allocate memory */
	s = malloc((n + len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	/* copy s1 to s */
	for (i = 0; i < len; i++)
	{
		s[i] = s1[i];
	}
	/* copy s2 to the newly allocated memory */
	for (i = 0; i < n; i++)
	{
		s[len + i] = s2[i];
	}
	s[len + n] = '\0';
	return s;
}
