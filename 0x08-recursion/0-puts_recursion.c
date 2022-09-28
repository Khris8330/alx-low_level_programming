#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
