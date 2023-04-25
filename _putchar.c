#include "main.h"



/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success, 1 is returned. On error, -1 is returned.
 */


int _putchar(char c)
{
	static char buf[BUFFER_SIZE];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}
