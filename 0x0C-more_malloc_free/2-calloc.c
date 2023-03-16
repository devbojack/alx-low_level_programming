#include "main.h"
#include <stdlib.h>

/**
 *  _calloc - allocates memory for an array, using malloc.
 *  @nmemb: mem to allocate
 *  @size: Size in bytes
 *
 *  Return: 0 or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, totalSize = 0;
	char *c;

	if (nmemb == 0 || size == 0)
		return (0);

	totalSize = nmemb * size;
	c = malloc(totalSize);

	if (c == NULL)
		return (0);

	while (x < totalSize)
	{
		c[x] = 0;
		x++;
	}

	return (c);
}
