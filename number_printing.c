#include "main.h"
/**
 * count_digit - returns the number of digits in an integer
 *
 * Return: the number of digits
 */
int count_digit(int d)
{
	unsigned int digits = 0;
	unsigned int u;

	if (d < 0)
	{
		u = d * -1;
	}
	else
		u = d;
	while (u != 0)
	{
		u /= 10;
		digits++;
	}
	return (digits);
}

/**
 * print_int - prints an integer.
 * @ap: the va_list argument passed by _printf
 * @f: a pointer to the struct flags determines if
 * a flug was passed by printf.
 *
 * Return: number of chars printed.
 */
int print_int(va_list ap, flags_t *f)
{
	int i = va_arg(ap, int);
	int result = count_digit(i);

	if (f->space == 1 && f->plus == 0 && i >= 0)
	{
		result += _putchar(' ');
	}
	if (f->plus == 1 && i >= 0)
	{
		result += _putchar('+');
	}
	if (i <= 0)
	{
		result++;
	}
	print_number(i);
	return (result);
}

/**
 * print_unsigned - prints an unsigned integer
 * @ap: the va_list argument passed via _printf.
 * @f: a pointer to flags via _printf.
 *
 * Return: it returns the number of chars printed.
 */
int print_unsigned(va_list ap, flags_t *f)
{
	unsigned int u = va_arg(ap, unsigned int);
	char *str = convert(u, 10, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_number - helps the function (print_int) to loop
 * through [this was used to reduce the number of lines
 * in a function]
 * @number: the given number.
 *
 * Return: nothing (void)
 */
void print_number(int number)
{
	unsigned int num;

	if (number < 0)
	{
		_putchar('-');
		num = -number;
	}
	else
		num = number;
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
