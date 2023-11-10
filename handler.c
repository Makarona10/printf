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

int identifier_handler(va_list vl, char *format, spec_s spec[])
{
	int x = 0, y;

	if (!format)
		return (0);

	while (format[x] != '\0')
	{
		y = 0;
		if (format[x] == '%')
		{
			if (format[x + 1] == '%')
			{
				_putchar('%');
				x += 1;
			}
			else
			{
				while (y < 2)
				{
					if (format[x + 1] == spec[y].formatter)
					{
						spec[y].func_call(vl);
						va_arg(vl, int);
						x += 1;
					}
					y++;
				}
			}
		}
		else
		{
			_putchar(format[x]);
		}
		x++;
	};
	return (x);
}
