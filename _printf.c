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
	char *s;
	char c;
	va_list args;
	va_start(args, format);

	if (format != NULL)
	{

		for ( ; *format; format++)
		{
			if (*format == '%')
			{
				switch (*(format + 1))
				{
					case 's':
						s = va_arg(args, char*);
						while (*s)
						{
							putchar(*s);
							s++;
						}
						format++;
						break;

					case 'c':
					       	c = va_arg(args, int);
                                                putchar(c);
                                                format ++;
                                                break;

					case '%':
						putchar('%');
						break;
				}

			}
			else {
			putchar(*(format));
			len++;
			}
		}

	}

	return (len);
}
