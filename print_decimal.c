#include "main.h"


/**
 * print_dec_helper - Recursively prints digits of an integer
 * @n: The integer to be printed
 *
 * Return: The number of digits printed
 */

int print_dec_helper(int n)
{
	int len = 0;

	if (n / 10)
		len += print_dec_helper(n / 10);

	_putchar((n % 10) + '0');
	len++;

	return (len);
}



/**
 * print_decimal - prints a decimal (base 10) integer
 * @args: the argument to print
 *
 * Return: the number of characters printed
 */



int print_decimal(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	int len = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		len++;
	}
	else
		num = n;
	if (num / 10)
		len += print_dec_helper(num / 10);
	_putchar((num % 10) + '0');
	len++;
	return (len);
}
