#include "main.h"
/**
  * create_file - create a file
  * @filename: name of file to create
  * @text_content: a null terminated string
  * Return: 1 on success
  */
int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int lenght = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[lenght])
			lenght++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content != NULL)
	{
		w = write(fd, text_content, lenght);
	}
	if (w == -1 || fd == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
