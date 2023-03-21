#include "main.h"

/**
 * _islower - checks if the input is lowercase
 * main - checks the code
 * @c: charcter input to check
 * Return: 0 Success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
