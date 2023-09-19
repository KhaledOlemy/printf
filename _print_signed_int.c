#include "main.h"
/**
 * _print_signed_int - sub function of _printf to print negative
 * numbers and then calls other function with positive value
 * @num: input decimal number to print
 *
 * Return: length of characters printed
 */
int _print_signed_int(int num)
{
	unsigned int l = 0, temp;

	if (num < 0)
	{
		_putchar('-');
		l += 1;
		num *= -1;
	}
	else if (num == 1)
	{
		_putchar(0 + '0');
	}
	temp = _print_int((unsigned long int) num, 1000000000, 0);
	if (temp == 0)
	{
		l += 1;
		_putchar('0');
	}
	else
	{
		l += temp;
	}
	return (l);
}
