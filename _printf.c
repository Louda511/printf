#include "main.h"

/**
 * _printf - function the prints the arguments passed to it on the screen
 * @format: main argument containing specifiers
 * @...: arguments passed to be printed
 *
 * Return: the number of characters printed
 *
 */

int _printf(const char *format, ...)
{
	int len = 0;

	if (format)
	{
		for ( ; *format; format++)
		{
			putchar(*(format));
			len++;
		}
	}
	return (len);
}
