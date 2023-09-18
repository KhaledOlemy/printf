#include "main.h"
/**
 * _print_hexa - sub function of _printf to print hexadecimals
 * @num: input decimal number to print in hexadecimal
 * @iter: highest divisible number to convert decimal to hexadecimal
 * @casing: X or x, to print in uppercase or lowecase.
 * @flag: to tell the code, are we still overhead getting zeros (to neglect),
 * or are we in the number boundaries
 *
 * Return: (0) always success
 */
int _print_hexa(unsigned int num, unsigned int iter, int flag, char casing)
{
	if (iter != 16)
	{
		iter /= 16;
		if (num / iter == 0 && flag == 0)
		{
			_print_hexa(num, iter, 0, casing);
		}
		else
		{
			flag = 1;
			if (num / iter == 0)
			{
				_print_hex_item(0, casing);
			}
			else
			{
				if ((num / iter) > 16)
				{
					_print_hex_item((num / iter) / 16, casing);
					_print_hex_item((num / iter) % 16, casing);
				}
				else
				{
					_print_hex_item((num / iter), casing);
				}
			}
			num %= iter;
			_print_hexa(num, iter, 1, casing);
		}
	}
	else
	{
		_print_hex_item((num % iter), casing);
	}
	return (0);
}
