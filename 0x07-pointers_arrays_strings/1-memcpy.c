#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: bytes to fill
 *
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
