#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: name of file
 * @letters: number of letters to be read.
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t readbytes;
	int write_ret;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	readbytes = read(fd, buffer, letters);
	if ((readbytes == -1) || (readbytes < (ssize_t)letters))
		return (0);

	write_ret =	write(1, buffer, readbytes);
	if (write_ret == -1)
		return (0);

	free(buffer);
	close(fd);
	return (readbytes);
}
