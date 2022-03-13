#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	char i;
	char j;

	i = 48;
	j = 'a';

	while (i <= 58)
	{
	putchar(i);
	i++;
	}
	while (j <= 'f')
	{
	putchar(j);
	j++;
	}
	putchar('\n');
	return (0);
}
