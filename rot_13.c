#include "main.h"

/**
 * p_rot - encodes a string using rot13
 *
 * @vl: The string will be encoded
 *
 * Return: The lenght of string
*/

int p_rot(va_list vl)
int p_rot(va_list vl)
{
	int x = 0;
	int y;
	char *s;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(vl, char*);

	if (s == NULL)
	{
		return(0);
	}


	while (s[x] != '\0')
	{
		for (y = 0; y <= 51; y++)
		{
			if (s[x] == alpha[y])
			{
				_putchar(rot[y]);
				break;
			}
		}
		if (y == 52)
			_putchar(s[x]);
			
		x++;
	}
	return (x);
}
