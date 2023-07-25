#include "main.h"
/**
 * print_address - prints the memory address of
 * a given input in hex format.
 * @ap: va_list argument from _printf
 * @f: the pointer to the struct flags that determines
 * if a flag was passed.
 *
 * Return: the number of characters printed.
 */
int print_address(va_list ap, flags_t *f)
{
	char *str;
	unsigned long int addrs = va_arg(ap, unsigned long int);

	register int counter = 0;

	(void)f;

	if (!addrs)
	{
		return (_puts("(nil)"));
	}
	str = convert(addrs, 16, 1);
	counter += _puts("0x");
	counter += _puts(str);
	return (counter);
}
