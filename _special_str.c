#include "main.h"
/**
 * _special_str - sub function of _printf to print special strings
 * @s: input string to print
 *
 * Return: length of characters printed
 */
int _special_str(char *s)
{
	int i = 0, j, l = 0;

	while (s[i] != NULL)
	{
		j = (int) s[i];
		if (j < 30 || j >= 127)
		{
			_print_string("\\x");
			if (j < 16)
			{
				_putchar('0');
			}
			l += 1;
			putchar(NULL);
		}
		else
		{
			_putchar('\0');
			_print_char(s[0]);
		}
		i++;
	}
	return (i + (l * 3));
}
