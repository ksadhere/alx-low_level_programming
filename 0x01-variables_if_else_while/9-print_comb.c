#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
	putchar(i);
	if (i != 57)
	{
	putchar(',');
	putchar(' ');
	i++;
	}
	}
	putchar('\n');
	return (0);
}
