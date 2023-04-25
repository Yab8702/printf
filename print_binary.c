#include "main.h"



/**
 * print_binary_helper - Recursively prints digits of an integer in binary
 * @n: The integer to be printed
 *
 * Return: The number of digits printed
 */


int print_binary_helper(unsigned int n)
{
	int len = 0;

	if (n / 2)
		len += print_binary_helper(n / 2);

	_putchar((n % 2) + '0');
	len++;

	return (len);
}

/**
 * print_binary - prints a decimal (base 10) integer as a binary number
 * @args: the argument to print
 *
 * Return: the number of characters printed
 */


int print_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int len = 0;

	if (n / 2)
		len += print_binary_helper(n / 2);
	_putchar((n % 2) + '0');
	len++;
	return (len);
}
