#include "main.h"

/**
 * _strchr - locate 1st occurrence of char in string and returns pointer
 * @s: string to search
 * @c: target charcater
 * Return: pointer to that charcater in string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (0);
}
