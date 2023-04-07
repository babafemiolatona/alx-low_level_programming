#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the strings containing the arguments
 * Return: 0(Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
