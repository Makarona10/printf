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

int identifier_handler(va_list vl, const char* form, spec_s spec[])
{
	int x, y, z, p;

	p = 0;
	for (x = 0; form[x] != '\0'; x++)
	{
		if (form[x] == '%')
		{
			for (y = 0; spec[y].formatter != NULL; y++)
			{
				if (form[x + 1] == spec[y].formatter)
				{
					z = spec[y].func_call(vl);
					if (z == -1)
						return (-1);
					p += z;
					break;
				}
			}
			if (spec[y].formatter == NULL && form[x + 1] != ' ')
			{
				if (form[x + 1] != '\0')
				{
					_putchar(form[x]);
					_putchar(form[x + 1]);
					p = p + 2;
				}
				else
					return (-1);
			}
			x = x + 1;
		}
		else
		{
			_putchar(form[x]);
			p++;
		}
	}
	return (p);
}
