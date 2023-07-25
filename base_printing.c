#include "main.h"
/**
 * print_hex - prints a number in hexadecimal base in
 * lowercase.
 * @ap: va_list argument from _printf
 * @f: pointer to the struct flags that determines if a
 * flag is passed to _printf
 * Description: the function calls convert() which in turns
 * converts the input number into the correct base and return
 * it as a string.
 *
 * Return: the number of chars printed.
 */
int print_hex(va_list ap, flags_t *f)
{
	unsigned int number = va_arg(ap, unsigned int);
	char *str = convert(number, 16, 1);
	int counter = 0;

	if (f->hash == 1 && str[0] != '0')
	{
		counter += _puts("0x");
	}
	return (counter);
}

/**
 * print_big_hex - prints a number in hexadecimal base
 * in uppercase format
 * @ap: va_list variable passed via_printf.
 * @f: pointer to a struct that determines is a flag was passed
 * to printf function.
 *
 * Return: the number of characters printed.
 */
int print_big_hex(va_list ap, flags_t *f)
{
	unsigned int number = va_arg(ap, unsigned int);
	char *str = convert(number, 16, 0);
	int counter = 0;

	if (f->hash == 1 && str[0] != '0')
	{
		counter += _puts("0X");
	}
	counter += _puts(str);
	return (counter);
}
/**
 * print_binary - prints a number in base 2.
 * @ap: va_list arguments from _printf().
 * @f: a pointer to the struct that determines if a flag
 * was specified in the printf function.
 *
 * Return: the number of chars printed.
 */
int print_binary(va_list ap, flags_t *f)
{
	unsigned int number = va_arg(ap, unsigned int);
	char *str = convert(number, 2, 0);

	(void)f;
	return (_puts(str));
}
/**
 * print_octal - prints a number in base 8.
 * @ap: va_list argument passed from _printf
 * @f: pointer to the struct that determines if a flag
 * is passed to _printf.
 * Description: the function calls convert() which in turn
 * converts the input number into the correct base and
 * return it as a string.
 *
 * Return: the number of chars printed.
 */
int print_octal(va_list ap, flags_t *f)
{
	unsigned int number = va_arg(ap, unsigned int);
	char *str = convert(number, 8, 0);
	int counter = 0;

	if (f->hash == 1 && str[0] != '0')
	{
		counter += _putchar('0');
	}
	counter += _puts(str);
	return (counter);
}
