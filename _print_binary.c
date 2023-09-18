#include "main.h"
/**
 * _print_binary - sub function of _printf to print binary numbers
 * @n: decimal number to print in binary
 *
 * Return: (0) always success
*/
int _print_binary(int n)
{
	int j, i = 0, binary[32];

	while (n > 0)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
	}
	return (0);
}
