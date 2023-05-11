#include <stdio.h>
#include <sys/stat.h>
/**
 * create_file - a function that creates a file
 * @filename: a name of file that should be created
 * @text_content: a text should be put in a file
 * Return: return 1 if successful else return -1
*/

int create_file(const char *filename, char *text_content)
{
	FILE *fptr = fopen(filename, "w");

	if (fptr == NULL || filename == NULL)
	{
		return (-1);
	}
	else
	{
		if (text_content != NULL)
		{
			if (dprintf(fileno(fptr), "%s", text_content) < 0)
			{
				fclose(fptr);
				return (-1);
			}
		}
		fclose(fptr);
		if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
			return (-1);
	}
	return (1);
}
