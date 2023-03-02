#include "main.h"

/**
 * print_number - print number characters
 * @n: integer parameters
 * Return: 0
 */

void print_number(int n)
{
	unsigned int ni;

	n1 = n;
	if (n < 0)
	{
		_putchar('-');
	}
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
