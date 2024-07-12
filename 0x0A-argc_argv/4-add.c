#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - add positive numbers
  * @argc: count of arguments
  * @argv: array of arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	if (argc < 2)
	{
		printf("0\n");
		return 1;
	}
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
