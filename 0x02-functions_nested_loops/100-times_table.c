#include "main.h"

/*
 * print_times_table - Prints the times table of the input,
 * starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int digit, mult, result;

	if (n >= 0 && n <= 15)
	{
		for (digit = 0; digit <= n; digit++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (result <= 99)
				_putchar(' ');
				if (result <= 9)
				_putchar(' ');

				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10)) % 10 + '0');
				}
				else if (result <= 99 && prod >= 10)
				{
					_putchar((result / 10) + '0');
				}
					_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
