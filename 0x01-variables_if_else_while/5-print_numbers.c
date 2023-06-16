#include <stdio.h>

/**
 * main - Entry point
 * Print all base 10 single digit numbers in one line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
	}
	putchar('\n');
	return (0);
}
