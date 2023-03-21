#include "main.h"

/**
 * print_alphabet - print a - z
 *
 * Description: loop through a - z
 */

void print_alphabet(void)
{
	char a = 'a';

	for (a = 0; a <= 'z'; a++)
		putchar(a);
	_putchar('\n');
}
