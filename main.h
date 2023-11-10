#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

/**
 * struct specifier - specify the sort of passed identifier
 *
 * @formatter: The passed identifier
 *
 * @f: A pointer to call function which is up to 
 * format the passed arguments according to identifier
*/

typedef struct specifier
{
	char *formatter;
	void (*f)(char*, va_list);
} spec_s;

int _putchar(char c);
void _print(char *s);
