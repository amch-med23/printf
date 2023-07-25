#include "main.h"
/**
 * print_str - a function to print strings
 * @args: the argument
 * Return: it returns the lenght of the string.
 */

int print_str(va_list ap)
{
	int len = 0;
	char *str = va_arg(ap, char *);
	if (!str)
	{
		str = "(null)";
	}
	while (*str)
	{
		putchar (*str++);
		len++;
	}
	return (len);
}

/**
 * print_char - a function to print characters.
 * @args: the arguments.
 * Return: the value of the character.
 */
int print_char(va_list args)
{
	char _char = va_arg(args, int);

	putchar(_char);
	return (1);
}
/**
 * print_perc - prints a '%'.
 * @ap: the arguement.
 * Return: the character printed ont hescreen
 * and a 1.
 */

int print_perc(va_list ap)
{
	(void)ap;
	putchar('%');
	return (1);
}
