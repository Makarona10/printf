#include "main.h"

/**
 * f_string - formatting funciton for strings
 *
 * @vl: A pointer to an arg
 *
 * Return: Length of string that will be printed
*/

int f_string(va_list vl)
{
	char *s;
	int s_len;


	s = va_arg(vl, char*);

	if (s == NULL)
	{
		s = "(null)";
	}
	_print(s);
	s_len = get_len(s);

	return (s_len);
}
