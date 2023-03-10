#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: CL arguments length
 * @argv: CL arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int len;

	for (len = 0; len < argc; len++)
	{
		printf("%s\n", argv[len]);
	}

	return (0);
}
