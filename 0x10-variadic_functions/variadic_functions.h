#ifndef __VARIADIC__
#define __VARIADIC__

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_a_char(char *separator, va_list args);
void print_a_integer(char *separator, va_list args);
void print_a_float(char *separator, va_list args);
void print_a_char_ptr(char *separator, va_list args);
int _putchar(char c);

/**
 * struct format_types - Struct format_types
 * @identifier: The conversion specifier
 * @f: The function pointer
 */
typedef struct format_types
{
	char *identifier;
	void (*f)(char *separator, va_list args);
} f_dt;

#endif
