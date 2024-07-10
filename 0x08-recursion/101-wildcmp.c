#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (strcmp(s1,s2) == '\0')
		return (1);
	if ((s1[0]) == (s2[0]) && (s1[0] == ((s2 + 1)[0])) || (*s2 == '*'))
		wildcmp(s1, ++s2);
	else if ((s1[0] == (s2[0]) && (s2[0] == ((s1 + 1)[0]))) || (*s2 == '*')
		wildcmp(++s1, s2);
	else if ((s1[0]) == (s2[0]))
		wildcmp(++s1, ++s2);
	else
		return (0);
}
