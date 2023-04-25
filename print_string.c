#include "main.h"


/**
 * print_string - prints a string
 * @args: argument list
 * @f: pointer to the struct flags
 * Return: number of characters printed
 */


int print_string(va_list args, flags_t *f)
{
	char *str = va_arg(args, char *);
	int len = 0;

	(void)f;
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		_putchar(*str);
		len++;
		str++;
	}
	return (len);
}
