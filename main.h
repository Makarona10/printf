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
	void (*func_call)(va_list);
} spec_s;

int _putchar(char c);
int _print(char *s);
int get_len(char* s);
int f_char(va_list vl);
int f_string(va_list vl);

