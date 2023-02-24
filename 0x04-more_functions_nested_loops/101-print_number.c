#include "main.h"
#include <stdio>

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 * Return: Nothing
 */

void print_number(int n)

{
	unsigned int m = n;

	if (n < 0)
	{
	n *= -1;
	m = n;
	_putchar('-');
	}
	m /= 10;
	if (m != 0)
	print_number(m);
	_putchar((unsigned int) n % 10 + '0');
}
