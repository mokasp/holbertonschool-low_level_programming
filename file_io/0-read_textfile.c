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

	str = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open("filename", O_RDWR);
	if (fd == -1)
		return (0);
	
	rd = read(fd, str, letters);
	if (rd == -1)
	{
		return (0);
	}
	wr = write(STDOUT_FILENO, str, rd);
	if (wr == -1)
		return (0);
	close(fd);
	free(str);
	return (wr);
}
