#include "main.h"
/**
 * _print_rev - this function print the string in reverse
 * @s: this is the input string
 *
 * Return: length of characters printed
 */
int _print_rev(char *s)
{
	int i, length;

	length = 0;
	while (s[length] != '\0')
	{
		length--;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_print_char(s[i]);
	}
	return (length);
}
