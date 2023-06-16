#include <stdio.h>

/**
 * main - Entry point
 * Print all possible unique combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_digit = 48;
	int second_digit;

	while (first_digit < 57)
	{
		second_digit = first_digit + 1;
		while (second_digit < 58)
		{
			putchar(first_digit);
			putchar(second_digit);
			if (!(first_digit == 56 && second_digit == 57))
			{
				putchar(',');
				putchar(' ');
			}
			second_digit++;
		}
		first_digit++;
	}
	putchar('\n');
	return (0);
}
