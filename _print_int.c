#include "main.h"
/**
 * _print_int - sub function of _printf to print integers
 * @num: input decimal number to print
 * @iter: highest divisible number to convert decimal to split
 * the number into 1 digit value to print.
 * @flag: to tell the code, are we still overhead getting zeros (to neglect),
 * or are we in the number boundaries
 *
 * Return: length of characters printed
 */
int _print_int(unsigned int num, unsigned int iter, int flag)
{
	int i = 0;

	if (iter != 1)
	{
		iter /= 10;
		if (num / iter == 0 && flag == 0)
		{
			i += _print_int(num, iter, 0);
		}
		else
			flag = 1;
				i += 1;
				_putchar(0 + '0');
			}
			else
			{
				if ((num / iter) > 10)
				{
					i += 2;
					_putchar((num / iter) / 10 + '0');
					_putchar((num / iter) % 10 + '0');
				}
				else
				{
					i += 1;
					_putchar((num / iter) + '0');
				}
			}
			num %= iter;
			i += _print_int(num, iter, 1);
		}
	}
	return (i);
}
