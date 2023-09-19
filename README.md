# Custom Self-made PRINTF
## First project in C trying build printf by ourselves while maintaining
## Betty Style and Betty Doc.

**Team**:  
1- __Khaled__ Olemy   
2- __Mostafa__ Mohamed   

We built:<br>

0-  Sub-functions to print characters (c), strings (s), and (%). <br>
1-  Sub-functions to print digits (d, i). <br>
2-  Sub-function  to print binary (b). <br>
3-  Sub-functions to print unsigned (u), octals (o), and hexadecimals (x, X). <br>
5-  Sub-function  to print Special strings (S). <br>
6-  Sub-function  to print Addresses in memory (p). <br>
13- Sub-function  to print strings in reverse (r). <br>
14- Sub-function  to print strings in rot13 format (R). <br>

Code Assembly and Structure:

1. We built main function to loop on the main format string, using variadic
 functions.
2. I built a switcher function, to redirect each specifier to it's functi-
on.
	The switcher function redirects the following specifiers
	to their respective functions as following:

	    c:			_print_char
	    			->	_putchar
	    s, S, r, R:		_string_navigator
	       	     		->	_print_string
				->	_print_rev
				->	_print_rot13
				->	_special_str
	    %:			_print_char
				->	_print_char
	    d, i:		_print_signed_int
				->	_print_int
	    u:			_unsigned_checker
				->	_print_char
				->	_print_int
	    x, X:		_print_hexa
				->	_print_hex_item
	    b:			_print_binary
				->	_print_char
	    o:			_print_octal
				->	_print_char
	    p:			_print_address
				->	_print_string
				->	_print_char
	    Other undefined:	_print_char

Code Functionality:

You can test against this code below
    	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	#include <limits.h>
	#include <stdio.h>
	#include "main.h"

	/**
	 * main - Entry point
	 *
	 * Return: Always 0
	 */

	 int main(void)
	 {
		int len;
		int len2;
		unsigned int ui;
		void *addr;

		len = _printf("Let's try to printf a simple sentence.\n");
		len2 = printf("Let's try to printf a simple sentence.\n");
		ui = (unsigned int)INT_MAX + 1024;
		addr = (void *)0x7ffe637541f0;
		_printf("Length:[%d, %i]\n", len, len);
		printf("Length:[%d, %i]\n", len2, len2);
		_printf("Negative:[%d]\n", -762534);
		printf("Negative:[%d]\n", -762534);
		_printf("Unsigned:[%u]\n", ui);
		printf("Unsigned:[%u]\n", ui);
		_printf("Unsigned octal:[%o]\n", ui);
		printf("Unsigned octal:[%o]\n", ui);
		_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
		printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
		_printf("Character:[%c]\n", 'H');
		printf("Character:[%c]\n", 'H');
		_printf("String:[%s]\n", "I am a string !");
		printf("String:[%s]\n", "I am a string !");
		_printf("Address:[%p]\n", addr);
		printf("Address:[%p]\n", addr);
		len = _printf("Percent:[%%]\n");
		len2 = printf("Percent:[%%]\n");
		_printf("Len:[%d]\n", len);
		printf("Len:[%d]\n", len2);
		_printf("Unknown:[%r]\n");
		printf("Unknown:[%r]\n");
		_printf("%b\n", 98);
		printf("%b\n", 98);
		_printf("Reverse of 'ABCD' is :%r\n", "ABCD");
		printf("Reverse of 'ABCD' is :%r\n", "ABCD");
		_printf("Rot13 version of 'Welcome' is: %R", "Welcome");
		printf("Rot13 version of 'Welcome' is: %R", "Welcome");
		return (0);
	}

	Compilation Command:
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
