#include "main.h"


/**
 * _strlen - Returns the length of a string
 * @s: The stringbeing checked
 *
 * Return: length of String s
 */
int _strlen(char *s)
{
	int sLength = 0;

	for (; *s != '\0'; s++)
		sLength++;

	return (sLength);
}
