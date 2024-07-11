#include <stdio.h>
#include "main.h"

/**
  *_islower - checks for lowercase characters
  *@c: takes c as parameter. value to be checked
  *Return: 1 if c is lowercase and 0 if otherwise
  */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
		return (0);
	}
}
