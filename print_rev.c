#include "main.h"



/**
  * print_rev - reverse string
  * @args: argument list
  * @f: pointer to struct flags
  * Return: @count printed
  */



int print_rev(va_list args, flags_t *f)
{
	char *str = va_arg(args, char *);
	int count = 0, i;
	char buffer[BUFFER_SIZE];

	(void)f;
	if (str == NULL)
		return (write(1, "(null)", 6));
	for (i = 0; str[i] != '\0'; i++)
	{
		buffer[i] = *(str + i);
		count++;
	}
	i--;
	for (; i >= 0; i--)
		_putchar(buffer[i]);
	return (count);
}
