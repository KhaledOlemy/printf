#include "main.h"
/**
 * unsigned_checker - checks if input num is NULL or not
 * and takes action based on that
 * @num: input number to be printed
 *
 * Return: length of characters printed
*/
int unsigned_checker(unsigned int num)
{
	int len = 0;

	if (!num)
	{
		_putchar('0');
		len += 1;
	}
	else
	{
		len += _print_int(num, 1000000000, 0);
	}
	return (len);
}
