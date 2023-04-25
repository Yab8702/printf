#include "main.h"


/**
 * print_char - writes a character to stdout
 * @args: argument_list
 *
 * Return: Number of character printed
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
