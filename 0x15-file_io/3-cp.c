#include "main.h"

/**
 * print_error - function that print error message
 * @mess: error message
 * @filename: value of error
 * @num: input number
 * @buff: array of strings
*/

void print_error(char *mess, char *filename, int num, char *buff)
{
	dprintf(STDERR_FILENO, "%s %s\n", mess, filename);
	exit(num);
	if (buff)
		free(buff);
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
		print_error("Usage: cp", "file_from file_to", 97, NULL);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error("Error: Can't read from file", argv[1], 98, NULL);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		print_error("Error: Can't write to", argv[2], 99, NULL);
	buffer = malloc(sizeof(char) * BUFSIZ);
	r_bytes = read(file_from, buffer, BUFSIZ);
	if (r_bytes == -1)
		print_error("Error: Can't read from file", argv[1], 98, buffer);
	r_bytes = write(file_to, buffer, r_bytes);
	if (r_bytes == -1)
		print_error("Error: Can't write to", arg[2], 99, buffer);
	if (close(file_from) == -1)
		print_error("Error: Can't close fd", strerror(errno), 100, buffer);
	if (close(file_to) == -1)
		print_error("Error: Can't close fd", strerror(errno), 100, buffer);
	return (0);
}
