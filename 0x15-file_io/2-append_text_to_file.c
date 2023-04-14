#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to add content
 * @text_content: content to add
 *
 * Return: 1 or -1 if NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int size, counter = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	size = open(filename, O_WRONLY | O_APPEND);

	if (size == -1)
	{
		return (-1);
	}

	while (text_content[counter])
	{
		counter++;
	}

	if (text_content != NULL)
	{
		if (write(size, text_content, counter) == -1)
		{
			return (-1);
		}
	}
	close(size);
	return (1);
}
