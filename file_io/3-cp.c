#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
/**
  * create_buffer - Allocates 1024 bytes for a buffer.
  * @file: The name of the file buffer is storing chars for.
  * Return: A pointer to the newly-allocated buffer.
  */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	int fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	char buffer[1024];
	int bytes_read;
	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		write(fd_to, buffer, bytes_read);
	}
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
