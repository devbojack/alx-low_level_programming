#include "main.h"

/**
 * _strpbrk - searches a string for aynyof a set of bytes
 * @s: Sring to search from
 * @accept: string to search for
 *
 * Return: accet byte pointer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x = 0, y;

	while (s[x])
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				s = s + x;
				return (s);
			}
		}

		x++;
	}

	return (0);
}
