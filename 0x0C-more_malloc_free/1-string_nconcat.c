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
	unsigned int s1Len = 0, s2Len = 0, totalLen = 0, x = 0, z = 0;

	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1Len])
		s1Len++;

	while (s2[s2Len])
		s2Len++;

	if (n >= s2Len)
		totalLen = s1Len + s2Len;
	else
		totalLen = s1Len + n;

	c = malloc(sizeof(char) * totalLen + 1);
	if (c == NULL)
		return (0);

	while (z < totalLen)
	{
		if (z <= s1Len)
			c[z] = s1[z];

		if (z >= s1Len)
		{
			c[z] = s2[x];
			x++;
		}
		z++;
	}
	c[z] = '\0';
	return (c);
}

