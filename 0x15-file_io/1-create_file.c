#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: pointer to a string
 *
 * Return: 1 if success, 0 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int file_k;
	int mletters;
	int rwr;

	if (filename == NULL)
		return (-1);

	file_k = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_k == -1)
		return (-1);

	if (!text_content)
		text_content = " ";

	for (mletters = 0; text_content[mletters]; mletters++)
		;

	rwr = write(file_k, text_content, mletters);


	if (rwr == -1)
		return (-1);
	close(file_k);

	return (1);
}
