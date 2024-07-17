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
	int lenght1 = 0;
	int lenght2 = 0;
	int result;
	char *string;
	int i, j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	/* find length of s1 & s2 */
	while (s1[lenght1] != '\0')
		lenght1++;
	while (s2[lenght2] != '\0')
		lenght2++;
	result = lenght1 + lenght2;
	string = (char *)malloc(result + 1 * sizeof(char));
	if (!string)
		return ('\0');
	for (i = 0; i < lenght1; i++)
		string[i] = s1[i];
	for (j = 0; i < lenght2; j++)
		string[i + j] = s2[j];
	string[result] = '\0';
	return (string);
}
