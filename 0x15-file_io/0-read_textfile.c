#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

/**
* read_textfile - Reads a tesxt file
* @filename: String holding the character to be read
* @letters: Number o letters it should read and print
* Return: Number of letter it could print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *str;

	if (filename == NULL)
	{
	return (0);
	}
	str = malloc(letters + 1);
	if (str == NULL)
	{
	return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
	free(str);
	return (0);
	}
	bytes_read = read(fd, str, letters);
	if (bytes_read == -1)
	{
	close(fd);
	free(str);
	return (0);
	}
	str[bytes_read] = '\0';
	bytes_written = write(STDOUT_FILENO, str, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
	close(fd);
	free(str);
	return (0);
	}
	close(fd);
	free(str);
	return (bytes_written);
}
