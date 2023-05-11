#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: file should be read
 * @letters: the number of letters it should read and print
 * Return: return actual number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	ssize_t r_bytes = 0, w_bytes = 0;
	char ch[1024];

	fp = fopen(filename, "r");

	if (fp == NULL || filename == NULL)
	{
		return (0);
	}
	else
	{
		while (r_bytes <= (ssize_t)letters && fgets(ch, letters, fp) != NULL)
		{
			w_bytes = write(1, ch, strlen(ch));
			if (w_bytes != (ssize_t)strlen(ch))
				return (0);
			r_bytes += strlen(ch);
		}

		fclose(fp);
		return (r_bytes);
	}
}
