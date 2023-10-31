#include "main.h"
/**
 * main - maint function
 * @argc: num of arguments
 * @argv: the arguments
 * Return: 0;
*/
int main(int argc, char **argv)
{
	int fd, fd_to;
	char buffer[BUF_SIZE];
	ssize_t write_bytes, read_bytes;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((read_bytes = read(fd, buffer, BUF_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close(fd);
	close(fd_to);
	if (close(fd == -1) || close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	return (0);
}
