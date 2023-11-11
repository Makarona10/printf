#include "main.h"

/**
 * f_char - formatting for characters
 *
 * @vl: A pointer to an arg
 * that will be printed
 *
 * Return: void
*/


int f_char(va_list vl)
{
	char c;

	c = va_arg(vl, int);
	_putchar(c);

	return (1);
}
