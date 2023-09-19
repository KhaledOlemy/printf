#include "main.h"
/**
 * _print_rev - this function print the string in reverse
 * @s: this is the input string
 *
 * Return: length of characters printed
 */
int _print_rev(char *s)
{
	int i, len;

	length = 0;
	while (s[len] != '\0')
	{
		len--;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_print_char(s[i]);
	}
	return (length);
}
