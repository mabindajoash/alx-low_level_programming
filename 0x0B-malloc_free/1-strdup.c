#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * @str: copy of the string to be duplicated
  * Return: pointer
  */
char *_strdup(char *str)
{
	int length = 0;
	char *string;
	int i;

	if (str == NULL)
		return ('\0');

	while (str[length] != '\0')
		length++;
	string = (char *)malloc((length + 1) * sizeof(char));
	if (string == NULL)
		return ('\0');
	for (i = 0; i <= length; i++)
	{
		string[i] = str[i];
	}
	return (string);
}
