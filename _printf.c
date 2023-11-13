#include "main.h"

/**
 * _printf - prints what user passes
 *
 * @format: String that user will pass which also
 * should contain a formatter for passed params
 *
 * Return: Lenght of the printed string
*/

int _printf(const char *format, ...)
{
	int _return_val;
	va_list vl;
	spec_s specifiers[] = {
		{'c', f_char},
		{'s', f_string},
		{'i', p_int},
		{'d', p_int},
	};

	if (format == NULL)
		return (-1);

	va_start(vl, format);
	_return_val = identifier_handler(vl, format, specifiers);
	va_end(vl);

	return (_return_val);
}
