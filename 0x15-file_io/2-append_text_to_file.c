#include <stdio.h>
#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of file
 * @filename: a name of file will be used
 * @text_content: a text that should be appended
 * Return: retunr 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fptr = fopen(filename, "a");

	if (fptr == NULL || filename == NULL)
	{
		return (-1);
	}
	else if (text_content != NULL)
	{
		if (dprintf(fileno(fptr), "%s", text_content) < 0)
		{
			fclose(fptr);
			return (-1);
		}
	}
	fclose(fptr);
	return (1);
}
