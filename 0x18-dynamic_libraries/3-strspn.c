#include "main.h"

/**
 * _strspn - Gets length of a prefix substring
 * @s: string to search into
 * @accept: substring prefix to search
 *
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byteNum = 0, x = 0, y;

	while (accept[x])
	{
		y = 0;

		while (s[y] != 32)
		{
			if (accept[x] == s[y])
				byteNum++;
			y++;
		}
		x++;
	}

	return (byteNum);
}
