#include "main.h"


/**
 * print_unsi_helper - recursive helper function for print_unsigned_integer
 * @n: the number to print
 *
 * Return: the number of digits in the number
 */
int print_unsi_helper(unsigned int n)
{
	int len = 0;

	if (n / 10 > 0)
		len += print_unsi_helper(n / 10);

	_putchar(n % 10 + '0');
	len++;

	return (len);
}


/**
 * print_unsi - prints an unsigned decimal (base 10) integer
 * @args: the argument to print
 * @f: pointer to struct flags
 * Return: the number of characters printed
 */

int print_unsi(va_list args, flags_t *f)
{
	unsigned int n = va_arg(args, unsigned int);
	int len = 0;

	(void)f;
	if (n / 10)
		len += print_unsi_helper(n / 10);
	_putchar((n % 10) + '0');
	len++;
	return (len);
}
