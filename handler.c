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

	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			for (y = 0; y < 4; y++)
			{
				if (format[x + 1] == spec[y].formatter)
				{
					len += spec[y].func_call(vl);
					va_arg(vl, int);
					break;
				}
			}
			if (y == 4 && format[x + 1] != ' ')
			{
				if (format[x + 1] != '\0')
				{
					_putchar(format[x]);
					_putchar(format[x + 1]);
					len = len + 2;
				}
			}
			x++;
		}
		else
		{
			_putchar(format[x]);
			len++;
		}
		x++;
	}
	return (len);
}	
