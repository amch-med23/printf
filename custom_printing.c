#include "main.h"
/**
 * print_rot13 - prints a string using the rot13 algorithm.
 * @ap: list of arguments passed from _printf.
 * @f: a pointer to the struct flags that determines if a flage
 * was passed from _printf.
 *
 * Return: it returns the length of the printed string.
 */
int print_rot13(va_list ap, flags_t *f)
{
	int j, k;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(ap, char *);
	(void)f;

	for (k = 0; s[k]; k++)
	{
		if (s[k] < 'A' || (s[k] > 'Z' && s[k] < 'a') || s[k] > 'z')
		{
			_putchar(s[k]);
		}
		else
		{
			for (j = 0; j <= 52; j++)
			{
				if (s[k] == rot13[j])
					_putchar(ROT13[j]);
			}
		}
	}
	return (k);
}

/**
 * print_rev - prints a string in reverse.
 * @ap: the arg_list argument passed from _printf.
 * @f: pointer to the struct flags that determines if a flag
 * is passed form _printf.
 *
 * Return: it returns the length of the printed string.
 */
int print_rev(va_list ap, flags_t *f)
{
	int i = 0, j;
	char *s = va_arg(ap, char *);

	(void)f;
	if (!s)
		s = "(null)";
	while (s[i])
		i++;
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	return (i);
}

/**
 * print_bigS - handle non printable characters
 * (0 < ASCII value < 32 or >= 127) are printed this way:
 * \x, followed bt the ASCII code value if Hexadecimal
 * (uppercase and always 2 characters).
 * @ap: va_list argument from _printf.
 * @f: a pointer to the flag struct determines if a flag
 * is passed to the _printf function.
 *
 * Return: number of chars printed.
 */
int print_bigS(va_list ap, flags_t *f)
{
	int i, counter = 0;
	char *res;
	char *s = va_arg(ap, char *);

	(void)f;
	if (!s)
	{
		return (_puts("(null)"));
	}
	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			counter += 2;
			res = convert(s[i], 16, 0);
			if (!res[1])
			{
				counter += _putchar('0');
			}
			counter += _puts(res);
		}
		else
			counter += _putchar(s[i]);
	}
	return (counter);
}
