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
  * @B: base
  * @lcase:lowercase
  * Return: @ptr pointer
  */

char *print_hex_n(unsigned long int num, int B, int lcase)
{
	static char *p;
	static char buff[50];
	char *ptr;

	p = (lcase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &(buff[49]);
	*ptr = '\0';
	do {
		*--ptr = p[num % B];
		num /= B;
	} while (num != 0);

	return (ptr);
}

/**
  * print_non_printable - print non printable
  * @args: argument list
  * @f: pointer to struct flags
  * Return: @count non_printable
  */

int print_non_printable(va_list args, flags_t *f)
{
	int count = 0, i;
	char *str = va_arg(args, char *);
	char *hex;

	(void)f;
	if (!str)
		return (print_str("(null)"));
	for (i = 0; str[i]; i++)
	{
		if (str[i] > 0 && (str[i] < 32 || str[i] >= 127))
		{
			print_str("\\x");
			count += 2;
			hex  = print_hex_n(str[i], 16, 0);
			if (!hex[1])
				count += _putchar('0');
			count += print_str(hex);
		}
		else
			count += _putchar(str[i]);
	}
	return (count);
}
