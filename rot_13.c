#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: The string will be encoded
 *
 * Return: The String's been encoded
*/

int p_rot(va_list vl)
{
	int x = 0;
	int y;
	char *s = va_arg(vl, char*)
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[x] != '\0')
	{
		for (y = 0; y <= 51; y++)
		{
			if (s[x] == rot[y])
			{
				s[x] = alpha[y];
				break;
			}
		}
		x++;
	}
	return (x);
}
