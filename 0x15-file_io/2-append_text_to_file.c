#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* append_text_to_file - Appends a text to file
* @filename: Name of file
* @text_content: Adds texts at the end of the file
* Return: 1 SUCCES
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t text_len, bytes_written;

	if (filename == NULL)
	{
	return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd ==  -1)
	{
	return (-1);
	}
	if (text_content != NULL)
	{
	text_len = strlen(text_content);
	bytes_written = write(fd, text_content, text_len);
	if (bytes_written != text_len)
	{
	close(fd);
	return (-1);
	}
	}
	close(fd);
	return (1);
}
