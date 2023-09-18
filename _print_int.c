#include "main.h"
/**
 * _print_int - sub function of _printf to print integers
 * @num: input decimal number to print
 * @iter: highest divisible number to convert decimal to split
 * the number into 1 digit value to print.
 * @flag: to tell the code, are we still overhead getting zeros (to neglect),
 * or are we in the number boundaries
 *
 * Return: (0) always success
 */
int _print_int(unsigned int num, unsigned int iter, int flag)
{
	if (iter != 1)
	{
		iter /= 10;
		if (num / iter == 0 && flag == 0)
		{
			_print_int(num, iter, 0);
		}
		else
		{
			flag = 1;
			if (num / iter == 0)
			{
				_putchar(0 + '0');
			}
			else
			{
				if ((num / iter) > 10)
				{
					_putchar((num / iter) / 10 + '0');
					_putchar((num / iter) % 10 + '0');
				}
				else
				{
					_putchar((num / iter) + '0');
				}
			}
			num %= iter;
			_print_int(num, iter, 1);
		}
	}
	return (0);
}
