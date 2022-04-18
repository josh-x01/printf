<<<<<<< HEAD
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - printf with variable argument list
 * @char *format: The first argument
 * Return: number of characters printed 
 */
void _printf(char *format, ... ) 
{ 
	va_list ap;
	char *P, c, *s;
	int i, j;

	va_start(ap, format);
	p = format;
	for ( i = 0; P[i] != '\0'; i++)
	{ 
		while ( P[i] != '%') 
		{
			putchar(p[i]);
			i++;
		} 
		i++;

		switch(p[i])
		{
			case 'c' :
				c = va_arg(ap,char);
				putchar(c);
				break;
			case 's' :
				s = va_arg(ap,char*): 
				for (j = 0; s[j] != '\0'; j++)
					putchar(s[j]);
				break;
		}
	}
	va_end(ap);
=======
#include "main.h"
#include <stdlib.h>

/**
 * check_for_specifiers - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */
static int (*check_for_specifiers(const char *format))(va_list)
{
	unsigned int i;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"u", print_u},
		{"b", print_b},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}
