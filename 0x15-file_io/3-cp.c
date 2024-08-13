#include "main.h"
/**
  * main - main entry point of the program
  * @argc: argument count
  * @argv: string of arguments
  * Return: 0 if succesful
  */
int main(int argc, char **argv)
{
	int fd, r, w, ft;
	char *file_from;
	char *file_to;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	/* open the files*/
	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s", file_from);
		exit(98);
		close(fd);
	}
	ft = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (ft == -1)
	{
		dprintf(2, "Error: Can't write to %s", file_to);
		exit(99);
		close(ft);
	}
	/* copy files*/
	while ((r = read(fd, buffer, 1024)) > 0)
	{
		w = write(ft, buffer, 1024);
		if (r != w)
		{
			dprintf(2, "Error: Cant't write to %s", file_to);
			exit(99);
			close(ft);
			close(fd);
		}
	}
	/* close fd*/
	if (close(fd) == -1 || close(ft) == -1)
	{
		dprintf(2, "Error: cant't close %d", fd | ft);
		exit(100);
	}
	return (0);
}
