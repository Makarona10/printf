#include "main.h"
/**
 * p_oct - prints an octal number.
 *
 * @vl: arguments.
 *
 * Return: counter.
 */
int p_oct(va_list vl)
{
	int k;
	int *ar;
	int count = 0;
	unsigned int n = va_arg(vl, unsigned int);
	unsigned int temp = n;

	while (n / 8 != 0)
	{
		n /= 8;
		count++;
	}
	count++;
	ar = malloc(sizeof(int) * count);

	for (k = 0; k < count; k++)
	{
		ar[k] = temp % 8;
		temp /= 8;
	}
	for (k = count - 1; k >= 0; k--)
	{
		_putchar(array[k] + '0');
	}
	free(ar);
	return (count);
}
