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
	int l = 0, temp;

	if (num < 0)
	{
		_putchar('-');
		l += 1;
		num *= -1;
	}
	else if (num == 0)
	{
		_putchar(0 + '0');
	}
	temp = _print_int((unsigned int) num, DEC_MAX_DIV, 0);
	if (temp == 0)
	{
		l += 1;
	}
	else
	{
		l += temp;
	}
	return (l);
}
