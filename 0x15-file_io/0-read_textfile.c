#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: file should be read
 * @letters: the number of letters it should read and print
 * Return: return actual number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r_bytes, file;
	char *buffer;

	file = open(filename, O_RDONLY);

	if (!file || filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	r_bytes = read(file, buffer, letters);

	if (r_bytes == -1)
	{
		free(buffer);
		return (0);
	}
	r_bytes = write(STDOUT_FILENO, buffer, r_bytes);
	free(buffer);
	close(file);

	if (r_bytes == -1)
		return (0);
	else
		return (r_bytes);
}
