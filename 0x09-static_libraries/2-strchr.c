#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Strinf containing the character
 * @c: character to locate
 *
 * Return: Pointer or NULL
 */
char *_strchr(char *s, char c)
{
	int x;
	int len;

	for (len = 0; s[len] != '\0'; len++)
		len++;

	for (x = 0; x <= len; x++)
	{
		if (s[x] == c)
		{
			s = s + x;
			return (s);
		}
	}

	return (0);
}
