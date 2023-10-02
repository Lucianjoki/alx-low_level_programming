#include "main.h"
#include <fcntl.h>

/**
 * append_text_to_file - append text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: string to add to the end of the line
 *
 * Return: 1 if file exists, -1 if file does not exist or fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_p;
	int kletters;
	int rwr;

	if (filename == NULL)
		return (-1);

	file_p = open(filename, O_WRONLY | O_APPEND);

	if (file_p == -1)
		return (-1);

	if (text_content)
	{
		for (kletters = 0; text_content[kletters]; kletters++)
			;

		 rwr = write(file_p, text_content, kletters);
		if (rwr == -1)
			return (-1);
	}
	close(file_p);
	return (-1);
}
