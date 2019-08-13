#include "holberton.h"

/**
  * read_textfile - Reads a text file and prints it to the POSIX standard out
  * @filename: name of the file to read
  * @letters: Number of letters to read and print
  * Return: The actual number of letters
  **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int text_f, read_f, result;
	char temp[BUFSIZE];

	if (filename == NULL)
		return (0);
	text_f = open(filename, O_RDONLY);
	if (text_f == -1)
		return (0);
	result = 0;
	read_f = 1;
	while (letters > BUFSIZE && read_f != 0)
	{
		read_f = read(text_f, temp, BUFSIZE);
		write(STDOUT_FILENO, temp, read_f);
		result = result + read_f;
		letters = letters - BUFSIZE;
	}
	read_f = read(text_f, temp, letters);
	write(STDOUT_FILENO, temp, read_f);
	result = result + read_f;
	close(text_f);
	return (result); 
}
