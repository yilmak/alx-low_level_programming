#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
	/* The finction that swaps the values of two integeres */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
