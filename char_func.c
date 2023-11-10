#include "main.h"

/**
 * f_char - formatting for characters
 *
 * @vl: A pointer to an arg
 * that will be printed
 *
 * Return: void
*/


void f_char(va_list vl)
{
	char c;

	c = va_arg(vl, char);
	_putchar(c);
}
