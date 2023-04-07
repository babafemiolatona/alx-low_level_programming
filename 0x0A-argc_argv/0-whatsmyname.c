#include "main.h"

/**
 * main - program that prints its name, followed by a new line
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the strings containing the arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
