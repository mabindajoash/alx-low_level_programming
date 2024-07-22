#include <stdio.h>
#include "main.h"
/**
  * main - print the name of the file it was compiled from
  * Return: 0 as always
  */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
