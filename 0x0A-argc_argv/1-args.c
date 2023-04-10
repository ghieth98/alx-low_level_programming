#include "main.h"
#include <stdio.h>

/**
 * main - print number of arguments added to the program
 * @argc: counter
 * @argv: pointer
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
