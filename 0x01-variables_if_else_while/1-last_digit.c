#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	int n;
	int u;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	u = n % 10;
	/* your code goes there */
	if (u > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, u);
	}
	else if (u < 6 && u != 0)
	{printf("Last digit of %d is %d and is less than 6 and not 0\n", n, u);
	}
	else
	{printf("Last digit of %d is %d and is 0\n", n, u);
	}
	return (0);
}
