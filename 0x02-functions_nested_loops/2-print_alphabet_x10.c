#include "main.h"

/**
 * print_alphabet x10 (Ten times)
 * Return: void
 */

{

	char c;
	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}