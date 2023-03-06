#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: String to search into
 * @needle - Substring to seaarch for
 *
 * Return: Pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0, y = 0;

	while (haystack[x])
	{
		while (needle[y])
		{
			if (haystack[x + y] != needle[y])
				break;

			y++;
		}

		if (needle[y] == '\0')
		{
			return (haystack + x);
		}

		x++;
	}

	return (0);
}
