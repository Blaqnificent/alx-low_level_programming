#include <stdio.h>
#include "main.h"

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter;
	int countto = 50;
	long a = 1;
	long b = 2;

	for (counter = 1; counter <= (countto / 2); counter++)
	{
		printf("%li,  %li ", a, b);
		a += b;
		b += a;
	}
	if (countto % 2 == 1)
	{
		printf("%li, ", a);
		_putchar(44);
		_putchar(32);
	}
	printf("\n");

	return (0);
}

