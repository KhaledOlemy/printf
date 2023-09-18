#include "main.h"
/**
 * _print_signed_int - sub function of _printf to print negative
 * numbers and then calls other function with positive value
 * @num: input decimal number to print
 *
 * Return: (0) always success
 */
int _print_signed_int(int num)
{
	int l = 0;

	if (num < 0)
	{
		_putchar('-');
		l += 1;
		num *= -1;
	}
	l += _print_int((unsigned int) num, 100000000, 0);
	return (l);
}
