#include "main.h"

/**
 * _strspn - returns length of string that matches values consistently
 * @s: string to search
 * @accepy: target matches
 * Return: number of bytes consecively matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int matches = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				matches++;
				break;
			}
			if (accept[j + i] == '\0' && s[i] != accept[j])
				return (matches);
		}
		i++;
	}
	return (matches);
}
