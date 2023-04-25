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
	int (*f)(va_list);

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			f = format_handler(format);
			if (f != NULL)
				count += f(args);
			else if (*format != '\0')
			{
				count += _putchar('%');
				if (*format == '\n')
				{
					_putchar('\n');
					count++;
				}
				else
					count += _putchar(*format);
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
