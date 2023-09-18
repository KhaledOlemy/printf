#include "main.h"
/**
 * _switcher - sub function of _printf to decide what to do
 * with each specifier
 * @s: input <format string> to pickup the specifier from
 * @i: index on which we're standing
 * @item: va_list item to pickup the value from va arguments
 * @flag: to return back where there were double %% or not
 * to return the right string length
 *
 * Return: (0) always success
 */
int _switcher(const char *s, int i, va_list item, int flag)
{
	switch (s[i + 1])
	{
	case 'c':
		_putchar(va_arg(item, int));
		break;
	case 's':
		_print_string(va_arg(item, char *));
		break;
	case '%':
		flag += 1;
		_putchar('%');
		break;
	case 'd': case 'i':
		_print_signed_int(va_arg(item, int));
		break;
	case 'u':
		_print_int(va_arg(item, unsigned int), 1000000000, 0);
		break;
	case 'x':
		_print_hexa(va_arg(item, unsigned int), 268435456, 0, 'x');
		break;
	case 'X':
		_print_hexa(va_arg(item, unsigned int), 268435456, 0, 'X');
		break;
	case 'b':
		_print_binary(va_arg(item, int));
		break;
	default:
		_putchar('%');
		_putchar(s[i + 1]);
		break;
	}
	return (flag);
}
