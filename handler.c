#include "main.h"



/**
  * format_handler - handle a conversation specifier (function pointer)
  * @s: the specifier
  * Return: Function pointer
  */


int (*format_handler(const char *s))(va_list)
{
	int i;
	Print_Handler fs[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_decimal},
		{"i", print_decimal},
		{"%", print_percent},
		{"b", print_binary},
		{"u", print_unsi},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_hex_upper},
		{"S", print_non_printable},
		{"p", print_pointer},
		{"R", print_rot13},
		{"r", print_rev},
		{"NULL", NULL}
	};
	for (i = 0; fs[i].specifier != NULL; i++)
	{
		if (*(fs[i].specifier) == *s && s != NULL)
			return (fs[i].handler);
	}
	return (NULL);
}
