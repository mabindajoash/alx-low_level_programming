#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: given input
 * @num: number to be checked
 * Return: 0 if number is divisible
 * 1 if number is not divisible
 */

int is_prime_number(int num, int n)
{
	if (n >= 1 || (n == num / 2))
	{
		return (1);
	}
	else
	{
		if (num % n == 0 || n <= 1)
		{
			return (0);
		}
		else
		{
			return (is_prime_number(num, n + 1));
		}
	}
}
