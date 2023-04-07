#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the strings containing the arguments
 * Return: 0(Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		char *p = argv[i];

		for (; *p != '\0'; p++)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
