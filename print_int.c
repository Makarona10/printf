#include "main.h"
/**
 * print_int - prints integer
 * @v1: argument to print
 * Return: integer
 */
int p_int(va_list v1)
{
	int x = va_arg(v1, int);
	int n, last_digit = x % 10;
	int dig;
       	int hv = 1;
	int k = 1;

	x = x / 10;
	n = x;

	if (last_digit < 0)
	{
		_putchar('-');
		n = -n;
		x = -x;
		last_digit = -last_digit;
		k++;
	}
	if (n > 0)
	{
		while (n / 10 != 0)
		{
			hv = hv * 10;
			n = n / 10;
		}
		n = x;
		while (hv > 0)
		{
			dig = n / hv;
			_putchar(dig + '0');
			n = n - (dig * hv);
			hv = hv / 10;
			k++;
		}
	}
	_putchar(last_digit + '0');

	return (k);
}
