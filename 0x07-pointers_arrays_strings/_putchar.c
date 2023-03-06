#include <unistd.h>

/**
 * _putchar - writes the character c to atdout
 * @c: The character to print
 * Return: Always 1 (Success)
 * Return -1 on error, & error will be set appropriatly.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
