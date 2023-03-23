#include "main.h"

/**
 * print_line - print the charcater "_" n times to draw a line
 * @n: number of charcaters to draw
 */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');

	_putchar('\n');
}
