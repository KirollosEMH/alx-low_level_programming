#include <stdio.h>

/**
 * main - Entry point
 * Print all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1_1 = 48, digit1_2 = 48, digit2_1, digit2_2, temp;

	while (digit1_1 <= 57)
	{
		while (digit1_2 <= 57)
		{
			digit2_1 = digit1_1;
			while (digit2_1 <= 57)
			{
				if (digit2_1 == digit1_1)
				{
					temp = digit1_2 + 1;
				} else
				{
					temp = 48;
				}
				digit2_2 = temp;
				while (digit2_2 <= 57)
				{
					putchar(digit1_1);
					putchar(digit1_2);
					putchar(' ');
					putchar(digit2_1);
					putchar(digit2_2);
					if (digit1_1 + digit1_2 + digit2_1 + digit2_2 != 227)
					{
						putchar(',');
						putchar(' ');
					}
					digit2_2++;
				}
				digit2_1++;
			}
			digit1_2++;
		}
		digit1_1++;
	}
	putchar('\n');
	return (0);
}
