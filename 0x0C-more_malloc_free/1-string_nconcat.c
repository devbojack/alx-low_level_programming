#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates 2 strings
 * @s1: String 1
 * @s2: String 2
 * @n: Conditional to use
 *
 * Return: Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int w = 0, x = 0, y = 0, z = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[w])
		w++;

	while (s2[x])
		x++;

	if (n >= x)
		y = w + x;
	else
		y = w + n;

	c = malloc(sizeof(char) * y + 1);
	if (c == NULL)
		return (0);

	x = 0;
	while (z < y)
	{
		if (z <= w)
			c[z] = s1[z];

		if (z >= x)
		{
			c[z] = s2[x];
			x++;
		}
		z++;
	}
	c[z] = '\0';
	return (c);
}

