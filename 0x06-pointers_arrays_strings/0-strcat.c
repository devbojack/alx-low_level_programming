#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination
 * @src: Source
 *
 * Return: A pointer
 */
char *_strcat(char *dest, char *src)
{
	int len, x;

	for (len = 0; dest[len]; len++)
		len++;

	for (x = 0; src[x] != 0; x++)
	{
		dest[len] = src[x];
		len++;
	}

	dest[len] = '\0';
	return (dest);
}
