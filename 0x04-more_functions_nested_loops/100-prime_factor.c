#include <stdio.h>
#include <math.h>

/**
  * main - Prints largest prime facotr
  *
  * Return: 0
  */
int main(void)
{
	long x, myMax;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
			myMax = number / x;
	}

	printf("%ld\n", myMax);

	return (0);
}
