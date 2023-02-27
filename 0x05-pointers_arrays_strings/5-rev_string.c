#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: String to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, temp;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
