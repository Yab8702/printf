#include "main.h"



/**
  * format_handler - handle a conversation specifier (function pointer)
  * @s: the specifier
  * Return: Function pointer
  */


int (*format_handler(char s))(va_list, flags_t *)
{
	Print_Handler fs[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_decimal},
		{'i', print_decimal},
		{'%', print_percent},
		{'b', print_binary},
		{'u', print_unsi},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_hex_upper},
		{'S', print_non_printable},
		{'p', print_pointer},
		{'R', print_rot13},
		{'r', print_rev}
	};
	int flags  = 14;
	int i;

	for (i = 0; i < flags; i++)
	{
		if ((fs[i].specifier) == s)
			return (fs[i].handler);
	}
	return (NULL);
}
