#include <stdio.h>
#include <unistd.h>
/**
  * main - prints putchar followed by a new line
  * Return: 0
  */

int main(void)
{
	write(1, "_putchar", 9);
	putchar('\n');
	return (0);
}
