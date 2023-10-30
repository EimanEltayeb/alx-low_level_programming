#include "main.h"
/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: files to append text to.
 * @text_content: text to be appended
 * Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int write_ret, len, fd, fd2, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd2 = open(filename, O_RDONLY);
		if (fd2 == -1)
		{
			close(fd2);
			return (-1);
		}
		else
			return (1);
	close(fd2);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
	{
		len++;
	}
	write_ret = write(fd, text_content, len);
		if (write_ret == -1)
		{
			close(fd);
			return (-1);
		}
	close(fd);
	return (1);
}
