#include "main.h"
/**
 * main - maint function
 * @argc: num of arguments
 * @argv: the arguments
 * Return: 0;
*/
int main(int argc, char **argv)
{
	int fd, fd_to, x, y;
	char buffer[BUF_SIZE];
	ssize_t read_bytes;

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
		if (write(fd_to, buffer, read_bytes) == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	x = close(fd);
	y = close(fd_to);
	if (x == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", x);
		exit(100);
	}
	if (x == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", y);
		exit(100);
	}
	return (0);
}
