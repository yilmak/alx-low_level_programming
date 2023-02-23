#include "main.h"

/**
 * _isdigit -Checks if a character is a digit
 * @n: The number to be checked
 * Return: 1 for a  digit character and 0fo anything else
 */

int _isdigit(int n)

{

	if (n >= 48 && n <= 57)
	{
	return (1);
	}
	return (0);
}
