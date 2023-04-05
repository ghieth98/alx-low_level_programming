#include "main.h"

/**
 * get_root - find square root of n, starting from the smalleest, 0
 * @n: n
 * @root: test root
 * Return: nautral square root, -1  if not natural root
 */

int get_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (get_root(n, root + 1));
}

/**
 * _sqrt_recursion - find natural square root
 * @n: n
 * Return: nautral square root, or -1 if not natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (get_root(n, 0));
}
