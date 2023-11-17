#include "main.h"

/**
 * p_rev - reverse array of integers
 *
 * @vl: The string will be reversed
 *
 * Return: length of printed string
 */

int p_rev(va_list vl)
{
	int x, len = 0;
	char *s;

	s = va_arg(vl, char *);

	if (s == NULL)
		return (0);

	while (s[len++])
		;

	for (x = (len - 2); x >= 0; x--)
	{
		_putchar(s[x]);
	}

	return (len);
}
