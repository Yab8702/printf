#include "main.h"



/**
  * print_rot13 - rot13 cypher text
  * @args: argument list
  * @f: pointer to struct flags
  * Return: @count printed
  */
int print_rot13(va_list args, flags_t *f)
{
	char *str = va_arg(args, char *);
	int count = 0;

	(void)f;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))
			count += _putchar(*str + 13);
		else if ((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str <= 'Z'))
			count += _putchar(*str - 13);
		else
			count += _putchar(*str);
		str++;
	}
	return (count);
}

