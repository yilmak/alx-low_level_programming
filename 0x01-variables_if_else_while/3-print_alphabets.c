#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -printsa text according to  numbers
 * Return: Always 0
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}

