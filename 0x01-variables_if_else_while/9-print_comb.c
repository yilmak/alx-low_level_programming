#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
	if (n != '9')
	{
	putchar(',');
	puchar(' ');
	}
	}
	putchar('\n');

	return (0);
}

