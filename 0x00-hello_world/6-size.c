#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	printf("Size of int: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of int: %zu byte(s)\n", sizeof(long int));
	printf("Size of int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of int: %zu byte(s)\n", sizeof(float));
	return (0);
}	
