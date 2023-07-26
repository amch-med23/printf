#include "main.h"

/**
 * get_print - determines what function to use to print
 * depending on the conversion specifier passed to _printf.
 * @s: the conversion specifier.
 * func_arr[] array to find a match between the conversion
 * specifier passed to _printf and the first element of the struct
 * and then determines the appropriate printing function.
 *
 * Return: a pointer to the matchin printing function.
 */
int (*get_print(char s))(va_list, flags_t *)
{
	ph func_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_big_hex},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		/*{'r', print_rev},*/
		{'S', print_bigS},
		{'p', print_address},
		{'%', print_percent}
	};
	int flagsn = 14;

	register int i;

	for (i = 0; i < flagsn; i++)
	{
		if (func_arr[i].c == s)
		{
			return (func_arr[i].f);
		}
	}
	return (NULL);
}
