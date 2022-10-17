#include"main.h"

/**
 * print_alphabet - prints the English alphabet
 *
 * return: Always 0
 */

void print_alphabet(void)
{
	int l = 97;

	while (l < 123)
	{
		_putchar(l);
	}
	l++;
	_putchar('\n');
	return (0);
}
