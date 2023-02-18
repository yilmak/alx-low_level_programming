#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */
int main(void)
{
	int Num;

	for (Num = '0'; Num <= '9'; Num++)
	putchar(Num);
	putchar('\');

	return (0);
}

