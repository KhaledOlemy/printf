#include "main.h"
/**
 * _printf - prints strings, chars, numbers, decimals,
 * hexadecimals, binaries, octals, signed, unsigned,
 * addresses, unknown specifiers, %
 * @format: input format to print, based on.
 * @...: actual arguments entered into va_list
 *
 * Return: length of string.
 */
int _printf(const char *format, ...)
{
	int i = 0, flag = 0;
	va_list iterator;

	va_start(iterator, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			flag = _switcher(format, i, iterator, flag);
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}
	va_end(iterator);
	if (flag == 0)
	{
		return (i);
	}
	return (i - 1);
}
