#include "main.h"

/**
 * read_textfile - reads a file and prints out the the POSIX standard output
 * 
 * @filename: name of the file 
 * @letters: number of letters in the file 
 * Return - then number of letters it should read and print 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t lenread, lenwrite;
	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return(0);
	}
	lenread = read(fd, buffer, letters);
	close(fd);
	if (lenread == -1)
	{
		free(buffer);
		return (0);
	}
	lenwrite = write(STDOUT_FILENO, buffer, lenread);
	free(buffer);
	if (lenwrite != lenread)
	{
		return (0);
	}
	return (lenwrite);
}
