#include "main.h"

/**
 * print_error - function that print error message
 * @mess: error message
 * @filename: value of error
*/

void print_error(char *mess, char *filename)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", mess, filename);
}
/**
* main - Entry point
* @argc: count of arguments
* @argv: array of arguments
* Return: return 0 if success
*/

int main(int argc, char **argv)
{
	int file_to, file_from, r_bytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		print_error("Can't read from file", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		print_error("Can't write to file", argv[2]);
		exit(99);
	}
	buffer = malloc(sizeof(char) * BUFSIZ);
	r_bytes = read(file_from, buffer, BUFSIZ);
	if (r_bytes == -1)
	{
		print_error("Can't read from file", argv[1]);
		exit(98);
	}
	r_bytes = write(file_to, buffer, r_bytes);
	if (close(file_from) == -1)
	{
		print_error("Can't close fd", strerror(errno));
		exit(100);
	}
	if (close(file_to) == -1)
	{
		print_error("Can't close fd", strerror(errno));
		exit(100);
	}
	return (0);
}
