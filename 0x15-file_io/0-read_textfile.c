#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: File to read
 * @letters: Size to print
 *
 * Return: size_t or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int counter, size;
	char *filer = malloc(sizeof(char *) * letters);

	if (filer == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	size = open(filename, O_RDONLY, 0600);

	if (size == -1)
	{
		return (0);
	}

	counter = read(size, filer, letters);
	write(STDOUT_FILENO, filer, counter);

	free(filer);
	close(size);
	return (counter);
}
