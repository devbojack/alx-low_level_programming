#include "main.h"


/**
 * strlen - Returns the length of a string
 * @s: The stringbeing checked
 *
 * Return : Int of length of s
 */
int _strlen(char *s)
{
	int sLength = 0;

	for (; *s != '\0'; s++)
		sLength++;

	return (sLength);
}
