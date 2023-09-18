#include "main.h"
/**
 * _print_string - sub function of _printf to print strings
 * @s: input string to print
 *
 * Return: (0) always success
 */
int _print_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (0);
}
