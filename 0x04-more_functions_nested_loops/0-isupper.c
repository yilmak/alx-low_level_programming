#include "main.h"

/**
 * _isupper - Check if a letter is an uppercase
 * @n: The number to be checked
 * Return: 1 for Uppercase letter and 0 for Lowercase and others
 */

int _isupper(int n)

{
	if (n >= 65 && n <= 90)
	{
	return (1);
	}
	return (0);
}
