#include "main.h"

/**
 * get_flag - turns on flags if _printf finds
 * @str: character that holds the flag specifier
 * @flag: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int get_flag(char str, flags_t *flag)
{
	int i = 0;

	switch (str)
	{
		case '+':
			flag->plus = 1;
			i = 1;
			break;
		case ' ':
			flag->space = 1;
			i = 1;
			break;
		case '#':
			flag->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
