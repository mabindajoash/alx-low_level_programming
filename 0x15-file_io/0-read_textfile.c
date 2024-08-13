#include "main.h"
/**
  * read_textfile - reads a text file and prints it to std output
  * @filename: name of the file
  * @letters: number of letters to print and read
  * Return: The actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int bytes_r;
	int bytes_w;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes_r = read(fd, buffer, letters);
	if (bytes_r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);
	if (bytes_w == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (bytes_w);
}
