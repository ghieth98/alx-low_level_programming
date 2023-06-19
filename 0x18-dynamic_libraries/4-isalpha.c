#include "main.h"

/**
 * _isalpha - checks for alphabet cahracter
 * @c: character to check
 * Return: 1 if lower or upppercase, o for anything else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
