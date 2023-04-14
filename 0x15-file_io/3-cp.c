#include "main.h"

/**
 * copy_file - copies the content of a file to another
 * @src: to copy from
 * @dest: to copy to
 *
 * Return: void/nothing
 */
void copy_file(const char *src, const char *dest)
{
	int wfile, rfile, counter;
	char buffer[1024];

	wfile = open(src, O_RDONLY);
	if (!src || wfile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	rfile = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((counter = read(wfile, buffer, 1024)) > 0)
	{
		if (write(rfile, buffer, counter) != counter || rfile == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (counter == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(wfile) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", wfile);
		exit(100);
	}

	if (close(rfile) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", rfile);
		exit(100);
	}
}

/**
 * main - main function
 * @argc: argument length
 * @argv: argument characters
 *
 * Return: An int for success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	exit(0);
}
