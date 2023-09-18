#include "main.h"
/**
 * _print_hexa - sub function of _printf to print hexadecimals
 * @num: input decimal number to print in hexadecimal
 * @iter: highest divisible number to convert decimal to hexadecimal
 * @casing: X or x, to print in uppercase or lowecase.
 * @flag: to tell the code, are we still overhead getting zeros (to neglect),
 * or are we in the number boundaries
 *
 * Return: length of characters printed
 */
int _print_hexa(unsigned int num, unsigned int iter, int flag, char casing)
{
	int i = 0;

	if (iter != 16)
	{
		iter /= 16;
		if (num / iter == 0 && flag == 0)
		{i += _print_hexa(num, iter, 0, casing); }
		else
		{
			flag = 1;
			if (num / iter == 0)
			{
				i += 1;
				_print_hex_item(0, casing);
			}
			else
			{
				if ((num / iter) > 16)
				{
					i += 2;
					_print_hex_item((num / iter) / 16, casing);
					_print_hex_item((num / iter) % 16, casing);
				}
				else
				{
					i += 1;
					_print_hex_item((num / iter), casing);
				}
			}
			num %= iter;
			i += _print_hexa(num, iter, 1, casing);
		}
	}
	else
	{
		_print_hex_item((num % iter), casing);
		i += 1;
	}
	return (i);
}
