#include "main.h"
/**
 * _switcher - sub function of _printf to decide what to do
 * with each specifier
 * @s: input <format string> to pickup the specifier from
 * @i: index on which we're standing
 * @item: va_list item to pickup the value from va arguments
 * @len: to determine string length
 *
 * Return: length of characters printed
 */
int _switcher(const char *s, int i, va_list item, int len)
{
	int flags = 0;

	switch (s[i + 1])
	{
	case 'c':
		_putchar(va_arg(item, int));
		flags += 1;
		break;
	case 's':
		len += _print_string(va_arg(item, char *));
		break;
	case '%':
		_putchar('%');
		flags += 1;
		break;
	case 'd': case 'i':
		len += _print_signed_int(va_arg(item, int));
		break;
	case 'u':
		len += _unsigned_checker(va_arg(item, unsigned int));
		break;
	case 'x':
		len += _print_hexa(va_arg(item, unsigned int), HEX_MAX_DIV, 0, 'x');
		break;
	case 'X':
		len += _print_hexa(va_arg(item, unsigned int), HEX_MAX_DIV, 0, 'X');
		break;
	case 'b':
		len += _print_binary(va_arg(item, int));
		break;
	case 'o':
		len += _print_octal(va_arg(item, unsigned int), OCT_MAX_DIV, 0);
		break;
	default:
		_putchar('%');
		_putchar(s[i + 1]);
		len += 2;
		break;
	}
	return (len + flags - 2);
}
