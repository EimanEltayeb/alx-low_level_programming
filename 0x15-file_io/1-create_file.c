#include "main.h"
/**
 * create_file - acreats file
 * @filename: name of the file to be created
 * @text_content: text to be added
 * Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int write_ret;
	int i;

	for (i = 0; text_content[i] != '\0'; i++)
	{
		len++;
	}

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	write_ret = write(1, text_content, len);
		if (write_ret == -1)
			return (-1);
	close(fd);
	return (1);
}