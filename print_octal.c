#include "main.h"


/**
 * print_octal - prints an octal number
 * @args: va_list containing the number to be printed
 *
 * Return: number of characters printed
 */


int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	char *octal_num = malloc(sizeof(char) * 12);
	int i = 0;

	while (num != 0)
	{
		octal_num[i] = (num % 8) + '0';
		num /= 8;
		i++;
	}
	if (i == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		for (i--; i >= 0; i--)
		{
			_putchar(octal_num[i]);
			count++;
		}
	}
	free(octal_num);
	return (count);
}
