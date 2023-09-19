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
	int i, j, l = 0;
	char *s1, *s2;

	if (!s)
	{
		return (_print_string("(nil)"));
	}
	i = 0;
	s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	s2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == s1[j])
			{
				l += _print_char(s2[j]);
				break;
			}
			else
			{
				l += _print_char(s[i]);
				break;
			}
		}
		i++;
	}
	return (l);
}
