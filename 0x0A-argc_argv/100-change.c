#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints minimum number of coins
  * @argc: count of arguments
  * @argv: array of arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int cents;
	int coins[5] = {25, 10, 5, 2, 1};
	int sum_coins = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			sum_coins++;
		}
	}
	printf("%d\n", sum_coins);
	return (0);
}
