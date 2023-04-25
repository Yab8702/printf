#include "main.h"


/**
 * print_char - writes a character to stdout
 * @args: argument_list
 * @f: pointer to the struct flags
 * Return: Number of character printed
 */

int print_char(va_list args, flags_t *f)
{
	char c = va_arg(args, int);

	(void)f;
	_putchar(c);
	return (1);
}
