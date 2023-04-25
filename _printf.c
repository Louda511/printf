#include "main.h"

/**
 * _printf - function the prints the arguments passed to it on the screen
 * @format: main argument containing specifiers 
 * @...: arguments passed to be printed
 *
 * Return: the number of characters printed (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int len = 0;

	for ( ; *format; format++)
	{
		putchar(*(format));
		len++;

	}
	return len;

}
