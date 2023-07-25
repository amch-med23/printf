#include "main.h"
/**
 * print_string - loops through a string characters
 * and prints them.
 * @ap: va_list argument from _printf.
 * @f: pointer to the struct flags that determins
 * if a flag is passed to _printf.
 *
 * Return: number of chars printed.
 */

int print_string(va_list ap, flags_t *f)
{
	char *s = va_arg(ap, char *);

	(void)f;

	if (!s)
	{
		s = "(null)";
	}
	return (_puts(s));
}

/**
 * print_char - prints a character.
 * @ap: the va_list argument from printf.
 * @f: pointer to the struct flags that determines
 * if a flag was passed to _printf.
 *
 * Return: number of chars printed.
 */

int print_char(va_list ap, flags_t *f)
{
	(void)f;
	_putchar(va_arg(ap, int));
	return (1);
}
