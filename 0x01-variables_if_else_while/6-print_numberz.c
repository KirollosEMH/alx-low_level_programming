#include <stdio.h>

/**
 * main - Entry point
 * Print all base 10 single digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 48;

	while (digit < 58)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
