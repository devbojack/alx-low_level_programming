#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: memory area pointed
 * @b: constant byte
 * @n: bytes to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
