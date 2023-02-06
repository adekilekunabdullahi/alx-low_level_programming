#include <unistd.h>
#include <fcntl.h>
int _strlen(char *s);
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: is the name of the file.
 * @text_content:is the NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, d;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, 0);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		d = write(fd, text_content, _strlen(text_content));
		if (d == -1)
			return (-1);
	}
	if (access(filename, F_OK) != 0)
		return (-1);
	close(fd);
	return (1);
}
/**
 * _strlen - function to calculate the length of a string
 *@s: string.
 *Return: length of the string.
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a])
	{
		a++;
	}
	return (a);
}
