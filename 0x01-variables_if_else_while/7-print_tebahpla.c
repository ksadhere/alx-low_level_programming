#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	char i;

	i = 122;

	while (i >= 97)
	{
	putchar(i);
	i--;
	}
	putchar('\n');
	return (0);
}
