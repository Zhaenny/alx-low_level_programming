#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always success 0
 */
int main(void)
{
	int n;
	int lastnumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnumber = n % 10;

	if (lastnumber > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastnumber);
	} else if (lastnumber == 0)
	{
			printf("Last digit of %d is 0 and is 0\n", n);
	} else
	{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnumber);
	}
	return (0);
}
