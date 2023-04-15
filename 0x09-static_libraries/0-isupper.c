#include "main.h"

/**
 * _isupper - checks for the uppercase character
 * @n: charcter to be checked
 * Return: 1 if true, 0 if false
 */

int _isupper(int n)
{
	if (n >= 'A' && n <= 'Z')
		return (1);

	return (0);
}
