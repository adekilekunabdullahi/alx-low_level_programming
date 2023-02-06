#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - function that creates a file.
 * @text_content: is a NULL terminated string to write to the file
 * @filename: is the name of the file to create.
 * Return: -1 on failure or 1 on success.
 */
int create_file(const char *filename, char *text_content)
{
	int file, a = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0600);
	if (file < 0)
		return (-1);
	while (text_content[a])
	{
		a++;
	}
	if (text_content)
	{
		write(file, text_content, a);
	}
	close(file);
	return (1);
}
