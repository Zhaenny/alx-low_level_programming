#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always success 0
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 10; i <= 19; i++)
	{
		for (j = 10; j <= 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if (i != 19 || j != 19)
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
