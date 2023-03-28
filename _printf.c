#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/*
 * _printf - Make printf function
 * @format : a string containing zero or more directives
 * Return: number of characters printed (excluding null bytes)
 */

int _printf(const char *format, ...)
{
	va_list arg_char;

	va_start(arg_char, format);
	char c = va_arg(arg_char, int);
	char *s = va_arg(arg_char, char *);
	va_end(arg_char);
	int i, length;

	for (i = 0; i < _strlen(format); i++)
	{
		length = 0;
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				write(1, &c, 1);
				i += 2;
				length++;
			}
			else if (format[i + 1] == 's')
			{
				length += _strlen(s);
				write(1, s, _strlen(s));
				i += 2;
			}
			else
				continue;
		}
		write(1, (format+i), 1);
		length++;
	}
	return (length);
}
