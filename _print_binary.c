#include "main.h"
/**
 * _print_binary - sub function of _printf to print binary numbers
 * @n: decimal number to print in binary
 *
 * Return: length of characters printed
*/
int _print_binary(unsigned int n)
{
	int i = 0, j;
	unsigned int binary[64], l = 0;

	if (n == 0)
	{
		_putchar(0 + '0');
		return (1);
	}
	while (n > 0)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
		l += 1;
	}
	return (l);
}
