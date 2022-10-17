#include "main.h"

/**
 * main - This program prints a function
 *
 * Return: Always success 0
 *
 */

int main(void)
{
	int w;
	char word[] = "_putchar";

	for (w = 0; word[w] != '\0'; w++)
	{
		_putchar(word[w]);
	}

	_putchar('\n');
	return (0);
}
