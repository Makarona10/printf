#include "main.h"
/**
 * p_bin - prints binary number.
 *
 * @vl: parameter.
 *
 * Return: integer
 */
int p_bin(va_list vl)
{
	int flags = 0;
	int count = 0;
	int k, a = 1, b;
	unsigned int n = va_arg(vl, unsigned int);
	unsigned int x;

	for (k = 0; k < 32; k++)
	{
		x = ((a << (31 - k)) & n);
		if (x >> (31 - k))
			flags = 1;
		if (flags)
		{
			b = x >> (31 - k);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
