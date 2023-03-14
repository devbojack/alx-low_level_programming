#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: 0 on failure, or pointer
 */
char *str_concat(char *s1, char *s2)
{
	int x = 1, y = 1, z, total;
	char *c;

	while (s1[x] != '\0')
	{
		x++;
	}

	while (s2[y] != '\0')
	{
		y++;
	}

	total = y + x;
	c = malloc((sizeof(char) * total) + 1);

	if (c == NULL)
		return (0);

	for (z = 0; z <= x; z++)
	{
		c[z] = s1[z];
	}

	for (z = 0; z <= y; z++)
	{
		c[z + x] = s2[z];
	}

	return (c);
}
