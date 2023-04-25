#include "main.h"



/**
  * print_str - print the address
  * @str: address
  * Return: @count address
  */

int print_str(char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}

/**
  * print_hex_n - print the corresponding hex value
  * @num: the non+prinable character
  * Return: @count printed
  */

int print_hex_n(unsigned int num)
{
	char hex_num[3] = {'\0'};
	int count = 0;
	char hex[17] = "0123456789ABCDEF";

	hex_num[0] = hex[(num >> 4) & 0xF];
	hex_num[1] = hex[num & 0xF];
	count += print_str(hex_num);
	return (count);
}

/**
  * print_non_printable - print non printable
  * @args: argument list
  * Return: @count non_printable
  */

int print_non_printable(va_list args)
{
	int count = 0, i;
	char *str = va_arg(args, char *);
	char hex[3];

	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			hex[0] = '\\';
			hex[1] = 'x';
			hex[2] = '\0';
			count += print_str(hex);
			count += print_hex_n((unsigned char)str[i]);
			str++;
		}
		else
			count += _putchar(str[i]);
	}
	return (count);
}
