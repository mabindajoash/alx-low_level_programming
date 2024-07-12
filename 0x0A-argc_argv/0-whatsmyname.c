#include "main.h"
#include <stdio.h>

/**
  * main - a programme that prints its name
  * @argc: count the number of arguments
  * @argv: array of strings
  * Return: 0
  */
int main(int argc, char *argv[])
{
	if (argc == 0)
	{
		printf("%s \n", argv[0]);
	}
	return (0);
}
