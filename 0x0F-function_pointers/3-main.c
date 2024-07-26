#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
  * main - main entry point of the programme
  * @argc: number of arguments
  * @argv: string of arguments
  * Return: operation on two numbers
  */
int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((strcmp(argv[2], "+") != 0) && (strcmp(argv[2], "-") != 0) && (strcmp(argv[2], "%") != 0) && (strcmp(argv[2], "/") != 0) && (strcmp(argv[2], "*") != 0))
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && (b == 0))
	{
		printf("Error\n");
		exit (100);
	}
	operation = get_op_func(argv[2]);
	if (operation != NULL)
		printf("%d \n", operation(a, b));
	return (0);
}
