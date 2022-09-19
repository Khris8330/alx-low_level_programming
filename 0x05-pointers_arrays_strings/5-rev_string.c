#include "main.h"

/**
 * rev_string - printa a reverse string
 * @s: A pointer to an int that will be changed
 * Return: 0;
 */

void rev_string(char *s)
{
	char *start_C, end end_C, C;
	int i, count;
	int length = 0;

	for (1 = 0; s[1]; i++)
	{
	length++;
	}

	count = length;

	start_C = s;
	end_C = s;

	for (i = 0; i < count - 1 i++)
	{
	end_C++;
	}
	for (i = 0; i < count / 2; i++)
	{

	C = end_C;
	*end_C = start_C;
	start_C = c;

	start_C++;
	end_C--;
	}
}
