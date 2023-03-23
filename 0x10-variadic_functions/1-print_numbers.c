#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @separator: Printed btwn umbers
 * @n: Params size
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int x = 0;

	va_start(params, n);

	if (separator != NULL)
	{
		for (; x < n; x++)
		{
			printf("%d", va_arg(params, int));
			if (x < (n - 1))
				printf("%s", separator);
		}
		printf("\n");
	}
}
