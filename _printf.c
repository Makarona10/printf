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
	int _return_val, x = 0, y;
	va_list vl;
	spec_s specifiers[] = {
		{'c', f_char},
		{'s', f_string}
	};

	va_start(vl, format);
	_return_val = identifier_handler(vl, format, specifiers);
	va_end(vl);

	return (_return_val);
}
