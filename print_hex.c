#include "main.h"


/**
 * print_hex - Prints an unsigned integer in hexadecimal form
 * @args: A va_list containing the integer to print
 * @f: pointer to struct flag
 * Return: The number of characters printed
 */

int print_hex(va_list args, flags_t *f)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = print_hex_n(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += print_str("0x");
	count += print_str(str);
	return (count);
}
