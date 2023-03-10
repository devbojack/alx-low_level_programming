#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: CL arguments length
 * @argv: CL arguments
 *
 * Return: 1 if error, 0 if good
 */
int main(int argc, char *argv[])
{
	int len,x, total = 0;

	if (argc < 1)
	{
		printf("0\n");
	}

	for (len = 1; len < argc; len++)
	{
		for (x = 0; argv[len][x] != '\0'; x++)
		{
			if (argv[len][x] < '0' || argv[len][x] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		total += atoi(argv[len]);
	}

	printf("%d\n", total);

	return (0);
}
