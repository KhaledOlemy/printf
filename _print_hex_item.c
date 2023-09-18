#include "main.h"
/**
 * _print_hex_item - sub function of _printf to print literals on hexadecimals
 * @num: decimal number to print in hexadecimal
 * @casing: X or x, to print in uppercase or lowecase.
 *
 * Return: (0) always success
 */
int _print_hex_item(int num, char casing)
{
	if (num < 10)
	{
		_putchar(num + '0');
	}
	else
	{
		if (casing == 'x')
		{
			_putchar(num + 87);
		}
		else if (casing == 'X')
		{
			_putchar(num + 55);
		}
	}
	return (0);
}
