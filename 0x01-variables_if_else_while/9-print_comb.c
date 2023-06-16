#include <stdio.h>

/**
 * main - Entry point
 * Print all single digit numbers separated by "," and space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 48;

	while (digit < 58)
	{
		putchar(digit);
		if (digit != 57)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
