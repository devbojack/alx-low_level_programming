#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name to create
 * @text_content: text content
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int size, counter = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	size = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (size == -1)
	{
		return (-1);
	}
	while (text_content[counter])
	{
		counter++;
	}

	if (text_content)
	{
		write(size, text_content, counter);
	}

	close(size);
	return (1);
}
