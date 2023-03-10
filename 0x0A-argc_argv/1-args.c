#include <stdio.h>

/**
 * main - Prints argc value
 * @argc: Arguments length
 * @argv: CL arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
