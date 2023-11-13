#include "main.h"

/**
 * identifier_handler - checks for a passed formatter and then
 * call the function that will be operated accordingly
 *
 * @format: String that user will pass which also
 * should contain a formatter for passed params
 *
 * @vl: A pointer to arguments list
 *
 * @spec: An array of struct of specifiers
 *
 * Return: Lenght of the printed string
*/

int identifier_handler(va_list vl, const char* format, spec_s spec[])
{
	int x = 0, y, len = 0;

	if (!format)
		return (0);

	again:
	while (format[x] != '\0')
	{
		y = 0;
		while (y < 2)
		{
			if (format[x] == '%' && format[x + 1] == spec[y].formatter)
			{
				len += (spec[y].func_call(vl));
				va_arg(vl, int);
				x += 2;
				goto again;
			}
			y++;
		}
		if (format[x] == '%' && (format[x + 1] != ' ' || format[x + 1] != '\0'))
		{
			_putchar(format[x + 1]);
			len++;
			x += 2;
		}
		else
		{
			_putchar(format[x]);
			x++;
		}
	}
	return (len);
}
