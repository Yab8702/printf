#include "main.h"


/**
 * print_dec_helper - Recursively prints digits of an integer
 * @n: The integer to be printed
 *
 * Return: The number of digits printed
 */

void print_dec_helper(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		print_dec_helper(num / 10);

	_putchar((num % 10) + '0');
}



/**
 * print_decimal - prints a decimal (base 10) integer
 * @args: the argument to print
 * @f: pointer to struct pointer
 * Return: the number of characters printed
 */



int print_decimal(va_list args, flags_t *f)
{
	int n = va_arg(args, int);
	int len = count_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		len += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		len += _putchar('+');
	if (n <= 0)
		len++;
	print_dec_helper(n);
	return (len);
}

/**
 * count_digit - returns the number of digits
 * @i: integer to evaluate
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int digit = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		digit++;
	}
	return (digit);
}
