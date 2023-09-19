#include "main.h"
/**
 * _print_address - sub function of _printf to print addresses
 * @addr: input address to print
 *
 * Return: length of characters printed
 */
int _print_address(unsigned long int addr)
{
	char hex[16];
	int i = 0, out = 0, digit;

	if (addr == 0)
	{
		return (_print_string("(nil)"));
	}
	while (addr > 0)
	{
		digit = addr % 16;
		if (digit < 10)
		{
			hex[i] = '0' + digit;
		}
		else
		{
			hex[i] = 'a' + (digit - 10);
		}
		addr /= 16;
		i--;
	}
	out += _print_char('0');
	for (i--; i >= 0; i--)
	{
		out += _print_char(hex[i]);
	}
	return (out);
}
