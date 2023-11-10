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
	int x;

	s = va_arg(vl, char*);
	print(s);
	x = get_len(s);

	return (x);
}
