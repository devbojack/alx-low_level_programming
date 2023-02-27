#include "main.h"
#include <stdio.h>

/**
 * print_array - Print elements of an array
 * @a: Value of array
 * @b: No. of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d \n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}
