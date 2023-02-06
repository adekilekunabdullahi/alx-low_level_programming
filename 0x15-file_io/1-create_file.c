#include <unistd.h>
#include <fcntl.h>
int _strlen(char *s);
/**
 * create_file - function that creates a file.
 * @text_content: is a NULL terminated string to write to the file
 * @filename: is the name of the file to create.
 * Return: -1 on failure or 1 on success.
 */
int create_file(const char *filename, char *text_content)
{
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		write(file, text_content, _strlen(text_content));
	}
	close(file);
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
