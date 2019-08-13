#include <stdio.h>
#include "holberton.h"

/**
  * append_text_to_file - Appends text at the end of a file
  * @filename: File to append to.
  * @text_content: content to append. Do not append if NULL
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int append, len, write_f;

	if (filename == NULL)
		return (-1);
	append = open(filename, O_WRONLY | O_APPEND);
	if (append == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (len = 0; text_content[len]; len++)
		;
	write_f = write(append, text_content, len);
	close(append);
	if (write_f == -1)
		return (-1);
	return (1);
}
