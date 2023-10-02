#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: the text being read
 * @letters: number of letters to be read and print
 *
 * Return: S - number of bytes read and printed, 0 when NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_s;
	ssize_t lenr, lenw;
	char *buff;

	if (filename == NULL)
		return (0);
	file_s = open(filename, O_RDONLY);
	if (file_s == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(file_s);
		return (0);
	}

	lenr = read(file_s, buff, letters);
	close(file_s);

	if (lenr == -1)
	{
		free(buff);
		return (0);
	}

	lenw = write(STDOUT_FILENO, buff, lenr);
	free(buff);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
