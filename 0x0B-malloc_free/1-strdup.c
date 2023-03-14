#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: String to duplicate
 *
 * Return: 0 if str is NULL, or a pointer to string
 */
char *_strdup(char *str)
{
	int x = 0, y;
	char *z;

	if (str == NULL)
		return (0);

	while (str[x] != '\0')
	{
		x++;
	}

	z = malloc((sizeof(char) * x) + 1);

	if (z == NULL)
		return (0);

	for (y = 0; y <= x; y++)
	{
		z[y] = str[y];
	}

	return (z);
}
