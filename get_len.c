#include <stdio.h>
#include "main.h"

/**
* get_len - gets the length of a string
*
* @s: The string input to calculate the length of
*
* Return: The length of a string
*/

int get_len(char *s)
{
	int len = 0;
	int x = 0;

	if (s != NULL)
	{
		while (s[x++] != '\0')
			len++;
	}
	return (len);
}
