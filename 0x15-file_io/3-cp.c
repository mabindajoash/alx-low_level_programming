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
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	if (argv[1] && argv[2] == NULL)
		return (0);
	/* open the files*/
	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file_from);
		exit(98);
	}
	ft = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", file_to);
		exit(99);
		close(fd);
	}
	/* copy files*/
	while ((r = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(ft, buffer, r);
		if (r != w || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant't write to %s", file_to);
			close(ft);
			close(fd);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file_from);
		close(ft);
		close(fd);
		exit(98);
	}
	/* close fd*/
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't close %d", fd);
		exit(100);
	}
	if (close(ft) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d", ft);
		exit(100);
	}
	return (0);
}
