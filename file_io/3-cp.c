#include "main.h"

/**
 * main - 000
 * @argc: 000
 * @argv: 000
 *
 * Return: 000
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	while ((rd = read(file_from, buff, 1024) != -1)
	{
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr = write(file_to, buff, rd);
		if (wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[1]);
			exit(99);
		}
	close(file_from);
	close(file_to);
	if (file_from == -1 || file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(100);
	}
	return (0);
}
