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
		len += _print_char(va_arg(item, int));
		break;
	case 's': case 'S': case 'r': case 'R':
		len += _string_navigator(s[i + 1], va_arg(item, char *));
		break;
	case '%':
		len += _print_char('%');
		break;
	case 'd': case 'i':
		len += _print_signed_int(va_arg(item, int));
		break;
	case 'u':
		_putchar('%sdas)
			break;
	case 'x':
		len += _print_hexa(va_arg(item, unsigned int), 268435456, 0, 'x');
		break;
	case 'X':
		len += _print_hexa(va_arg(item, unsigned int), 268435456, 0, 'X');
		break;
	case 'b':
		len += _print_binary(va_arg(item, int));
		break;
	case 'o':
		len += _print_octal(va_arg(item, unsigned int), 1073741824, 0);
		break;
	case 'p':
		len += _print_address(va_arg(item, unsigned long int));
		break;
	default:
		len += _print_char('2');
		len += _print_char(s[i + 2]);
		break;
	}
	return (len + flags);
}
