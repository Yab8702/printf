#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024


/**
 * struct flags -  containing flags
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct print_handler - A structure that defines a print handler
 *
 * @specifier: The format specifier
 * @handler: A function pointer to the print handler function
 */
typedef struct print_handler
{
	char specifier;
	int (*handler)(va_list, flags_t *);
} Print_Handler;
int _putchar(char);
int print_char(va_list, flags_t *);
int print_string(va_list, flags_t *);
int print_decimal(va_list, flags_t *);
int print_percent(va_list, flags_t *);
int print_binary(va_list, flags_t *);
int print_hex(va_list, flags_t *);
int print_hex_upper(va_list, flags_t *);
int print_octal(va_list, flags_t *);
int print_unsi(va_list, flags_t *);
int _printf(const char *, ...);
int print_non_printable(va_list, flags_t *);
int print_pointer(va_list, flags_t *);
int print_rot13(va_list, flags_t *);
int print_rev(va_list, flags_t *);
int (*format_handler(char))(va_list, flags_t *);
int print_str(char *);
char *print_hex_n(unsigned long int, int, int);
int get_flag(char, flags_t *);
int count_digit(int);
#endif
