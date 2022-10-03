#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it recieves
 * @argc: An array of pointers to the arguments
 * @argv: Array of pointers to the arguments
 *
 * Return: Always
 */
int main(int argc, char *argv[])
{
	int arg;
	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
