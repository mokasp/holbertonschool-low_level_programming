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

	rd = 1024;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (rd == 1024)
	{
		rd = read(file_from, buff, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr = write(file_to, buff, rd);
		if (wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	closefunc(file_from);
	closefunc(file_to);
	return (0);
}
/**
 * closefunc - closes
 * @file: file to close
 *
 * Return: void
 */
void closefunc(int file)
{
	int closer;

	closer = close(file);
	if (closer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
