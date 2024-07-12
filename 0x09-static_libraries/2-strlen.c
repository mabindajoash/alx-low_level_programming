#include <string.h>
#include <stdio.h>
/**
  *_strlen - returns the lenght of the string
  *@s: takes in character s as parameter
  *Return: returns leght as an int
  */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
