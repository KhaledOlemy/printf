#include "main.h"
/**
 * _string_navigator - sub function of _printf to choose
 * whether it's a special string or a normal one
 * @c: modifier for normal/special string
 * @s: input string to print
 *
 * Return: length of characters printed
 */
int _string_navigator(char c, char *s)
{
	if (c == 's')
	{
		return (_print_string(s));
	}
	else if (c == 'r')
	{
		return (0);
	}
	else if (c == 'R')
	{
		return (_prit_rot13(s));
	}
	else
	{
		return (_special_str(s));
	}
}
