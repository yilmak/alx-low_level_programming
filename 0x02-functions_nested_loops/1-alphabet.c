#include "main.h"

/**
 * Print_alphabet - make the alphabet
 * Return: void
 */

void print_alphabet(void)

{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
	_puchar(a);
	}
	_putchar('\n');
}
