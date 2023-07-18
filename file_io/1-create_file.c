#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text content to put in file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, cnt;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (text_content)
	{
		while (*text_content != '\0')
			cnt++;
		wr = write(fd, text_content, cnt);
		if (wr == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
