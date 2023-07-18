#include "main.h"

/**
 * append_text_to_file - append text to end of file
 * @filename: name of file to create
 * @text_content: text content to put in file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, cnt;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd = -1)
		return (-1);
	if (text_content)
	{
		while (text_content[cnt] != '\0')
			cnt++;
	}
	wr = write(fd, text_content, cnt);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
