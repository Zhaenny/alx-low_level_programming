#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always success 0
 *
 */
int main(void)
{
	int e;
	int f;
	int j;

	for (e = 0; e <= 9; e++)
	{
		for (f = 0; f <= 9; f++)
		{
			for (j = 0; j <= 9; j++)
			{
				if (j > f && f > e)
				{
					putchar(e + '0');
					putchar(f + '0');
					putchar(j + '0');
					if (e != 7 || f != 8 || j != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
