#include "main.h"
/**
  * read_textfile - Reads a text file and prints it to POSIX stdout.
  * @filename: A pointer to the name of the file.
  * @letters: The number of letters the
  *           function should read and print.
  *
  * Return: If the function fails or filename is NULL - 0.
  *         O/w - the actual number of bytes the function can read and print.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t n;
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (0);
	n = read(fd, buffer, letters);
	if (n == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	write(STDOUT_FILENO, buffer, n);
	free(buffer);
	close(fd);
	return (n);
}
