#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Return: Always 0
 */
int main(void)
{
	int m, n, z;

	for (m = '0'; m < '9'; m++)
	{

	for (n = m + 1; n <= '9'; n++)
	{
	for (z = n + 1; z <= '9'; z++)
	{
	if ((n != m) != z)
	{
	putchar(m);
	putchar(n);
	putchar(z);
	if (m == '7' && n == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

