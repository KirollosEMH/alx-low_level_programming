#include <stdio.h>

/**
 * main - Entry point
 * Print all possible unique combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int st_digit = 48;
	short int nd_digit;
	short int rd_digit;

	while (st_digit < 56)
	{
		nd_digit = st_digit + 1;
		while (nd_digit < 57)
		{
			rd_digit = nd_digit + 1;
			while (rd_digit < 58)
			{
				putchar(st_digit);
				putchar(nd_digit);
				putchar(rd_digit);
				if (!(st_digit == 55 && nd_digit == 56 && rd_digit == 57))
				{
					putchar(',');
					putchar(' ');
				}
				rd_digit++;
			}
			nd_digit++;
		}
		st_digit++;
	}
	putchar('\n');
	return (0);
}
