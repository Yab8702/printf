#include "main.h"



/**
  * print_percent - printing '%' symbol
  * @args: argument list
  * @f: pointer to dtruct flags
  * Return: number of '%' symbol printed
  */


int print_percent(va_list args, flags_t *f)
{
	(void)args;
	(void)f;

	_putchar('%');
	return (1);
}
