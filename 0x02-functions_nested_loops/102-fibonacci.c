#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0(Success)
 */

int main(void)
{
	long int a, b, c, d;

	b = 1;
	c = 2;
	d = 3;

	for (a = 0; a < 50; a++)
	{
		if (a != 49)
			printf("%ld, ", b);
		else
			printf("%ld\n", b);
		d = c + d;
		c = b + c;
		b = d - c;
	}
	return (0);
}
