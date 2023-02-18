#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */
int main(void)
{
	int z;

	for (z = '0'; z <= '9'; z++)
	putchar(z);
	putchar('\n');

	return (0);
}

