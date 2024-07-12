#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * main - prints the number of arguments passed to it
  * @argc: number of arguments
  * argv: array of arguments
  * Return: 0 value
  */
int main(int argc, char *argv[])
{
	argv = argv;
	printf("%d\n", argc - 1);
	return (0);
}
