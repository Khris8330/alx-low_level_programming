#include "main.h"

/**
 * print_sign - function to check for a sign of a number
 * @n:  is the int that will use for the argument of the function
 *
 * Return: 1 if the number is greater than zero,
 * 		0 if the number is zero,
 * 		-1 if the number is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('_');
	return (-1);
	}
	else
	{
	_putchar(0);
	return (0);
	}
}
