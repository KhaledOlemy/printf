#include "main.h"
int _special_str(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = (int) s[i];
		if (j < 32 || j >= 127)
		{
			_print_string("\\x");
			if (j < 16)
			{
				_putchar('0');
			}
			_print_hexa((int) j,HEX_MAX_DIV, 0, 'X');

		}
		else
		{
			_putchar(s[i]);
		}
		i++;
	}
	return (i);
}
