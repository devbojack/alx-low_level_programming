#include "main.h"

/**
 * get_endianness - checker for  big or little endian
 *
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int  checker = 1;
	char *endian = (char *)&checker;

	if (*endian)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
