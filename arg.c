#include <stdarg.h>
#include "main.h"
#include <stdio.h>
void print_char(int num ,...);

/*
 * Testing variable arguments
 */

int main(void)
{
	print_char(5, 'A', 'B', 'C', 'D');
}

void print_char(int num, ...)
{
	va_list args;

	va_start(args, num);

	for(int i = 0; i < num; i++)
	{
		char c = va_arg(args, int);
		printf("Char: %c\n", c);
	}
	va_end(args);
}

		
