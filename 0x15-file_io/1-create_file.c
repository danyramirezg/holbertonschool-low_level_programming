#include "holberton.h"

/**
  * create_file - Creates a file with permissions rw-------
  * @filename: File's name to create
  * @text_content: Contents of the file.
  * Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int new, write_f, len;

	len = 0;

	if (filename == NULL)
		return (-1);
	new = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (new == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(new);
		return (1);
	}
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
		write_f = write(new, text_content, len);
	}
	if (write_f == -1 || write_f != len)
		return (-1);
	return (1);
}
