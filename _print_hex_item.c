#include "main.h"
/**
 * _print_hex_item - sub function of _printf to print literals on hexadecimals
 * @num: decimal number to print in hexadecimal
 * @casing: X or x, to print in uppercase or lowecase.
 *
 * Return: length of characters printed
 */
int _print_hex_item(int num, char casing)
{
	int l = 0;

	if (num < 10)
	{
		_putchar(num + '0');
		l += 1;
	}
	else
	{
		if (casing == 'x')
		{
			_putchar(num + 87);
			l += 1;
		}
		else if (casing == 'X')
		{
			_putchar(num + 55);
			l += 1;
		}
	}
	return (1);
}
