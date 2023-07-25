#include "main.h"
/**
 * print_percent - prints a percent char.
 * @ap: va_list argument as passed from _printf
 * @f: pointer to the struct falgs in which the flags are
 * turned on
 *
 * Return: number of chars printed.
 */
int print_percent(va_list ap, flags_t *f)
{
	(void)ap;
	(void)f;
	return (_putchar('%'));
}
