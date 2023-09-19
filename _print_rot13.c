#include "main.h"
/**
 * _print_rot13 - this function applies cyfer of rot13 type
 * and prints it
 * @s: this is the input string
 *
 * Return: length of characters printed
 */
int _print_rot13(char *s)
{
	int i = 0, l = 0;

	if (!s)
	{
		return (_print_string("0"));
	}
	while (s[i] != '\0')
	{
		if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
		{
			l += _print_char(s[i] + 13);
		}
		else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
		{
			l += _print_char(s[i] - 11);
		}
		else
		{
			l += _print_char(s[i]);
		}
		i++;
	}
	return (l);
}
