#ifndef _PRINTF_MAIN_H_
#define _PRINTF_MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _print_hex_item(int num, char casing);
int _print_hexa(unsigned int num, unsigned int iter, int flag, char casing);
int _print_int(unsigned int num, unsigned int iter, int flag);
int _print_signed_int(int n);
int _print_string(char *s);
int _switcher(const char *s, int i, va_list item, int len);
int _print_binary(unsigned int n);
int _print_octal(unsigned int num, unsigned int iter, int flag);
int unsigned_checker(unsigned int num);
#endif
