#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the strings containing the arguments
 * Return: 0(Success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
