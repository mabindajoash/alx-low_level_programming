#include <math.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: 0 value
 */

int main(void)
{
	long n = 612852475143, div;

	while (div < (n / 2))
	{
		if ((n % 2) == 0)
		{
			n /= 2;
			continue;
		}

		for (div = 3; div < (n / 2); div +=2)
		{
			if ((n % div) == 0)
				n /= div;
		}
	}
	printf("%ld\n", n);
	return (0);
}
