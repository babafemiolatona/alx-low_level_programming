#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the strings containing the arguments
 * Return: 0(Success)
 */

int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}
	return (0);
}
