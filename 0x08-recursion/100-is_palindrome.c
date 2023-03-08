#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);

/**
 * is_palindrome - Check if is palindrome
 * @s: string
 * 
 * Return: 1 if true, 0 if not
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}

/**
 * find_strlen - Get string length
 * @s: string
 *
 * Return: string length
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - Checks if is palindrome.
 * @s: string
 * @len: string length
 * @index: The index
 *
 * Return: 1 if true, 0 if false.
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}
