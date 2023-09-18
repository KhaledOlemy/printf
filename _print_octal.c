#include "main.h"
/**
 * _print_octal - sub function of _printf to print in octal
 * @num: input decimal number to print in octal
 * @iter: highest divisible number to convert decimal to octals
 * to split the number into 1 digit value to print.
 * @flag: to tell the code, are we still overhead getting zeros (to neglect),
 * or are we in the number boundaries
 *
 * Return: length of characters printed
 */
int _print_octal(unsigned int num, unsigned int iter, int flag)
{
	int i = 0;

	if (iter != 8)
	{
		iter /= 8;
		if (num / iter == 0 && flag == 0)
		{i += _print_octal(num, iter, 0); }
		else
		{
			flag = 1;
			if (num / iter == 0)
			{
				i += 1;
				_putchar(0 + '0');
			}
			else
			{
				if ((num / iter) >= 8)
				{
					i += 2;
					_putchar((num / iter) / 8 + '0');
					_putchar((num / iter) % 8 + '0');
				}
				else
				{
					i += 1;
					_putchar((num / iter) + '0');
				}
			}
			num %= iter;
			i += _print_octal(num, iter, 1);
		}
	}
	else
	{
	_putchar(num + '0');
	i += 1;
	}
	return (i);
}
