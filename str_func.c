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

	if (s == NULL)
	{
		s = "(null)";
		print(s);
		s_len = 6;
	}
	else
	{
		s = va_arg(vl, char*);
		_print(s);
		s_len = get_len(s);
	}

	return (s_len);
}
