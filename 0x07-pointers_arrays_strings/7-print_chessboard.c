#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: pointer to an 8x8 array representing the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
			putchar(' ');
		}
		putchar('\n');
	}
}
