#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdarg.h>
/**
* exit_with_error - Prints error format & arg
* @code: Parameter A
* @format: Parameter B
* Return: 0 success
*/
void exit_with_error(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(code);
}
/**
* main - HANDLING COPY FOR a to b
* @argc: Argument count
* @argv: Argument Vector
* Return: 0 success
*/
int main(int argc, char *argv[])
{
	const char *file_from = argv[1], *file_to = argv[2];
	int fd_to, fd_from = open(file_from, O_RDONLY);
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	exit_with_error(97, "Usage: cp file_from file_to\n");
	if (fd_from == -1)
	exit_with_error(98, "Error: Can't read from file %s\n", file_from);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	exit_with_error(99, "Error: Can't write to file %s\n", file_to);

	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		exit_with_error(99, "Error: Can't write to file %s\n", file_to);
	}

	if (bytes_read == -1)
	exit_with_error(98, "Error: Can't read from file %s\n", file_from);
	if (close(fd_from) == -1)
	exit_with_error(100, "Error: Can't close fd %d\n", fd_from);
	if (close(fd_to) == -1)
	exit_with_error(100, "Error: Can't close fd %d\n", fd_to);
	return (0);
}

