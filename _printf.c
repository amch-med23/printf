#include "main.h"

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
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	va_list ap;
	flags_t flags = {0, 0, 0};

	register int counter = 0;

	va_start(ap, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				counter += _putchar('%');
				continue;
			}
			while (ret_flag(*p, &flags))
				p++;
			pfunc = get_print(*p);
			counter += (pfunc)
				? pfunc(ap, &flags)
				: _printf("%%%c", *p);
		} else
			counter += _putchar(*p);
	}
	_putchar(-1);
	va_end(ap);
	return (counter);
}
