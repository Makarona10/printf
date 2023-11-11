#include "main.h"

/**
 * printf_reverse - prints a string in reverse
 * @l: argument from _printf
 * Return: length of the printed string
 */

int printf_reverse(va_list vl)
{
	int z, x = 0;
	char *c = va_arg(l, char *);

	if (!c)
		c = "(null)";

	/* Calculate the x of the c */
	for (x = 0; c[x] != '\0'; x++)
		;

	/* Print the c in reverse order */
	for (z = x - 1; z >= 0; z--)
		_putchar(c[z]);

	return (x);
}
