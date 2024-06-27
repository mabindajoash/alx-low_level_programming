#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <math.h>

/**
 * main - entry point
 * Return: 0 value
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 && i % 5 == 0 )
		{
			printf("Fizz Buzz ");
		}
	else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
	else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
	else
		{
			printf("%d ", i);
		}
	}

	printf("\n");

	return (0);
}
