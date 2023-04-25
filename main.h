#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024

/**
 * struct print_handler - A structure that defines a print handler
 *
 * @specifier: The format specifier
 * @handler: A function pointer to the print handler function
 */
typedef struct print_handler
{
	char *specifier;
	int (*handler)(va_list);
} Print_Handler;
int _putchar(char);
int print_char(va_list);
int print_string(va_list);
int print_decimal(va_list);
int print_percent(va_list);
int print_binary(va_list);
int print_hex(va_list);
int print_hex_upper(va_list);
int print_octal(va_list);
int print_unsi(va_list);
int _printf(const char *, ...);
int print_non_printable(va_list);
int print_pointer(va_list);
int print_rot13(va_list);
int print_rev(va_list);
int (*format_handler(const char *))(va_list);
#endif
