#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int _putchar(char c);
int *_strcpy(char *dest, char *src);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_percent(void);
int print_int(va_list args);
int print_rot13(va_list args);
int print_hex_extra(unsigned long int num);
int print_dec(va_list args);
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_exc_string(va_list val);
int print_HEX_extra(unsigned int num);
int print_pointer(va_list val);
int print_revs(va_list args);
int rev_string(char *s);

#endif
