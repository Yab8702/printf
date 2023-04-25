#include "main.h"


/**
  * _printf - print anything
  * @format: format specifier
  * Return: @count printed
  */


int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr;
	int (*f)(va_list, flags_t *);
	flags_t flags = {0, 0, 0};

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (ptr = format; *ptr; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*ptr, &flags))
				ptr++;
			f = format_handler(*ptr);
			count += (f)
				? f(args, &flags)
				: _printf("%%%c", *ptr);
		}
		else
			count += _putchar(*ptr);
	}
	_putchar(-1);
	va_end(args);
	return (count);
}
