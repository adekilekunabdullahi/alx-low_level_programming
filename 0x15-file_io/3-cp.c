#include <fcntl.h>
#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - main program to copy strings from one file to Another
 * @argc: ...
 * @argv: ...
 * Return: success or failure.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(2, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	copy_string(argv[1], argv[2]);
	exit(0);
}
/**
 * copy_string - ...
 * @file_from: ...
 * @file_to: ...
 */
void copy_string(const char *file_from, const char *file_to)
{
	char ptr[1024];
	int cd, fd, fd1;

	fd = open(file_from, O_RDONLY);
	if (fd == -1 || access(file_from, F_OK) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd1 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((cd = read(fd, ptr, 1024)) > 0)
	{
		if (fd1 == -1 || write(fd1, ptr, cd) != cd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (cd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
}
