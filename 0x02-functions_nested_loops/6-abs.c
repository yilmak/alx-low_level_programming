#include "main.h"

/**
 * _abs - computes an absolute value of an integer
 * @c: the number to be computed
 * Return: Absolue value of a number
 */

int _abs(int c)

{

	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
