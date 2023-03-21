#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @i: integer value
 * Return: last digit number
 */

int print_last_digit(int i)
{
	if (i < 0)
		i *= -1;

	_putchar('0' + (i % 10));

	return (i % 10);
}
