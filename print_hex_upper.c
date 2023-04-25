#include "main.h"


/**
 * print_hex_upper - Prints an unsigned integer in hexadecimal form
 * @args: A va_list containing the integer to print
 *
 * Return: The number of characters printed
 */


int print_hex_upper(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char buffer[BUFFER_SIZE], *hex = "0123456789ABCDEF";
	int len = 0, i;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		buffer[len] = hex[n % 16];
		n /= 16;
		len++;
	}

	for (i = len - 1; i >= 0; i--)
		_putchar(buffer[i]);

	return (len);
}
