#include "main.h"
/**
 * _isalpha - function to check for a sign of a number
 * @c: is the int that will use for the argument of the function
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
