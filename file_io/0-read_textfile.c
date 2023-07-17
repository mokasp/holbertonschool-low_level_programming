#include "main.h"

/**
 * read_textfile - reads text file and prints to standard output
 * @filename: name of file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, wr, rd;
	char *str;

	if (filename == NULL)
		return (0);

	str = malloc(sizeof(char) * letters);
	
	if (filename != NULL)
	{
		fd = open("filename", O_RDONLY);
		if (fd == -1)
			return (0);
	}

	rd = read(fd, str, letter);
	if (rd == NULL)
	{
		free(rd);
		return (0);
	}
	wr = write(fd, str, letters);
	if (wr == NULL)
		return (0);
	close(fd);
	return (wr);
}
