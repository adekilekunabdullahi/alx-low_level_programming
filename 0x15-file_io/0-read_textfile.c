#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile -  a function that reads a text file and prints it to the ...
 * POSIX standard output.
 * @filename: filename.
 * @letters: number of letters to read and write.
 * Return: number of letter that are read and write.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, ab, bc;
	char *text;

	text = malloc(sizeof(char) * letters);
	if (!filename)
		return (0);
	if (!text)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ab = read(fd, text, letters);
	if (ab < 0)
		return (0);
	text[ab] = '\0';
	bc = write(STDIN_FILENO, text, ab);
	if (bc < 0)
		return (0);
	free(text);
	close(fd);
	return (ab);
}
