#include <stdlib.h>

/**
 * main - print lowercase a-z
 * Return: Always 0(Sucess)
 */

int main(void)
{
	char alpha = 'a';

	while (alph <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
