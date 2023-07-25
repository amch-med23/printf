#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - a function similar to the standard
 * printf function.
 * @format: the specified format.
 * @...: the elepsis.
 *
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{
	int i;
	const char *p;
	va_list ap;

	va_start(ap, format);
	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			p++;
			i += ch_f(&p, ap);
		}
		else
		{
			putchar(*p);
			i++;
		}
		p++;
	}
	va_end(ap);
	return (i);
}

/**
 * check_f - checks the format of the condition
 * @f: the format argument
 *
 * Return: the G value.
 */
int ch_f(const char **f, va_list ap)
{
	int i;
	int G;
	int add;

	GH def[] = {
		{'c', print_char}, {'s', print_str}, {'%', print_perc}, {'\0', NULL},
	};
	i = 0;
	G = 0;
	add = 0;
	while (def[i].spc)
	{
		if (**f == def[i].spc)
		{
			G += def[i].hndlr(ap);
			add++;
			break;
		}
		i++;
	}
	if (!add)
	{
		putchar('%');
		putchar(**f);
		G += 2;
	}
	return (G);
}
