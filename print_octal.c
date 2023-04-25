#include "main.h"


/**
 * print_octal - prints an octal number
 * @args: va_list containing the number to be printed
 * @f: pointer to struct flags
 * Return: number of characters printed
 */


int print_octal(va_list args, flags_t *f)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = print_hex_n(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += print_str(str);
	return (count);
}
