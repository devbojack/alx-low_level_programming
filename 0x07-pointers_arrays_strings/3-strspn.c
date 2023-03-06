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
	int sLen, aLen, x, y;
	unsigned int byteNum = 0;

	for (sLen = 0; s[sLen] != '\0'; sLen++)
		sLen++;

	for (aLen = 0; accept[aLen] != '\0'; aLen++)
		aLen++;

	for (x = 0; x <= aLen; x++)
	{
		for (y = 0; y <= sLen; y++)
		{
			if (s[y] != 32)
			{
				if (accept[x] == s[y])
					byteNum++;
			}
		}
	}

	return (byteNum);
}
