#include "main.h"
/**
 * _print_string - sub function of _printf to print strings
 * @s: input string to print
 *
 * Return: length of characters printed
 */
int _print_string(char *s)
{
	int i = 0;

	if (!s)
	{
		_print_string("(null)");
		return (6);
	}
	while (s[i] != '\0')
	{
		_print_char(s[i]);
		i++;
	}
	return (i);
}
