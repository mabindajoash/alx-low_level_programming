#include <stdio.h>
#include <unistd.h>

/**
  * main - takes no argument
  * Return: value returned is 1
  */
int main(void)
{
	char *message;

	message = "and the piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, strlen(message));
	return (1);
}
