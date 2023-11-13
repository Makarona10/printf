#include "main.h"
/**
 * print_int - prints integer
 * @v1: argument to print
 * Return: integer
 */
int print_int(va_list v1)
{
	int x = va_arg(v1, int);
	int n, last_digit = x % 10,
	int dig;
       	int hv = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last_digit < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			hv = hv * 10;
			num = num / 10;
		}
		num = n;
		while (hv > 0)
		{
			digit = num / hv;
			_putchar(digit + '0');
			num = num - (digit * hv);
			hv = hv / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
