#include "variadic_functions.h"

/**
 * sum_them_all - Returns sum
 * @n: params
 *
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list params;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(params, n);

	for (; i < n; i++)
	{
		sum += va_arg(params, int);
	}
	va_end(params);

	return (sum);
}
