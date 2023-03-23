#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: String btwn
 * @n: Params size
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int x = 0;
	char *stringarr;

	if (n > 0)
	{
		va_start(params, n);

		for (; x < n; x++)
		{
			stringarr = va_arg(params, char *);
			if (stringarr == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", stringarr);

			if (x < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		va_end(params);
	}
	printf("\n");
}
