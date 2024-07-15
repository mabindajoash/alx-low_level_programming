#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments in program
 * @ac:argument count
 * @av: pointer to arguments
 * Return: pointer to new string, NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;

	int i, j, k, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}
	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[size] = '\0';
	return (str);
}
