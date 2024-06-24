#include <stdio.h>

/**
 * main - takes no arguments
 * Return: 0 value always
 */
int main(void)
{
	char (C);
	int (I);
	long int (L);
	long long int (LL);
	float (F);

	printf("Size of char: %d bytes(s)\n", sizeof(C));
	printf("Size of int: %i byte(s)\n", sizeof(I));
	printf("Size of long int: %d byte(s)\n", sizeof(L));
	printf("Size of long long int: %d byte(s)\n", sizeof(LL));
	printf("Size of float: %d byte(s)\n", sizeof(F));

	return (0);
}
