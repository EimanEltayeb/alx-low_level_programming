#include "main.h"
/**
 * main - maint function
 * Return: 0;
*/
int main(int argc, char **argv)
{
	int fd, fd_to;
	char buffer[BUF_SIZE * 8];
	
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}

}