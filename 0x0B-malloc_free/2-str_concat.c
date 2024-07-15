#include <stdio.h>
#include <stdlib.h>
/**
  * str_concat - concatenates two strings
  * @s1: the first string to be passed
  * @s2: the second string to be passed
  * Return: pointer to a new location
  */
char *str_concat(char *s1, char *s2)
{
	int length1 = 0;
	int length2 = 0;
	int result;
	char *string;
	int i, j;

	if (!s1)
		s1 = " ";
	if (!s2)
		s2 = " ";
	/* find length of s1 & s2 */
	while (s1[length1++])
		length1++;
	while (s2[length2++])
		length2++;
	result = length1 + length2;
	string = (char *)malloc(result + 1 * sizeof(char));
	for (i = 0; s1[i]; i++)
		string[i] = s1[i];
	for (j = 0; s2[j]; i++, j++)
		string[i] = s2[j];
	*string = '\0';
	return (string);
}
