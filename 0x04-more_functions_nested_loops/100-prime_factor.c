#include <stdio.h>
#include <math.h>

/**
 * main - Points the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */

int main(void)

{
	long n, max;
	long number = 612852475143;
	double sqaure = sqrt(number);

	for (n = 1; n <= square; n++)
	{
	if (number % n == 0)
	{
	maxf = number / n;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}