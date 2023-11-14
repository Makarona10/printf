#include "main.h"
/**
 * p_int - function used to print integers
 *
 * @vl: the argument to print integers
 *
 * Return: The length of printed integer number
 */
int p_int(va_list vl)
{
	int x = va_arg(vl, int);
	int n, last_dig = x % 10;
	int dig;
	int hv = 1;
	int int_len = 1;

	x = x / 10;
	n = x;

	if (last_dig < 0)
	{
		_putchar('-');
		n = -n;
		x = -x;
		last_dig = -last_dig;
		int_len++;
	}
	if (n > 0)
	{
		while (n / 10 != 0)
		{
			hv = hv * 10;
			n = n / 10;
		}
		n = x;
		for (; hv > 0; int_len++)
		{
			dig = n / hv;
			_putchar(dig + '0');
			n = n - (dig * hv);
			hv = hv / 10;
		}
	}
	
	_putchar(last_dig + '0');

	return (int_len);
}
