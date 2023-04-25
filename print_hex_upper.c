#include "main.h"


/**
 * print_hex_upper - Prints an unsigned integer in hexadecimal form
 * @args: A va_list containing the integer to print
 * @f: pointer to struct flags
 * Return: The number of characters printed
 */


int print_hex_upper(va_list args, flags_t *f)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = print_hex_n(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += print_str("0X");
	count += print_str(str);
	return (count);
}
