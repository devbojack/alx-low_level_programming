#include "main.h"
#include <unistd.h>

/**
 * Write char c to stdout
 *
 * Return : 1 on success
 * Return : -1 on error
 */

int _putchar(char myChar)
{
	return (write(1, &myChar, 1));
}
