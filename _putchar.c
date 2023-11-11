#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 *
 * @c: the charachter will be printed
 *
 * Return: return 1 when true, and -1 on errors
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _print - prints a string
*
* @s: The string will be printed
*
* Return: length of printed string
*/

int _print(char *s)
{
	short int x;

	for (x = 0; s[x] != '\0'; x++)
		_putchar(s[x]);
	return (x);
}
