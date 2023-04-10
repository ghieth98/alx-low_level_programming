#include <stdio.h>
#include "main.h"

/**
 * main - print program name
 * @argc: counter
 * @argv: pointer
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
