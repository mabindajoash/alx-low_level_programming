#include "main.h"
/**
  * append_text_to_file - appends text at the end of file
  * @filename: name of the file
  * @text_content: string to add
  * Return: 1 on success -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int w, fd;
	int lenght = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[lenght])
			lenght++;
	}
	fd = open(filename, O_WRONLY | O_APPEND, 0664);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content != NULL)
	{
		w = write(fd, text_content, lenght);
		if (w == -1)
		{
			close(fd);
			return (0);
		}
	}
	close(fd);
	return (1);
}
