#include "main.h"
/**
 * ret_flag - turns on flags if _printf finds a
 * flag modifier in the format string.
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn
 * the flags.
 *
 * Return: 1 if a flag has been turned on, 0 if no
 * flag was turned on.
 */
int ret_flag(char ch, flags_t *flag)
{
	int i = 0;

	switch (ch)
	{
	case '+':
		flag->plus = 1;
		i = 1;
		break;
	case '#':
		flag->hash = 1;
		i = 1;
		break;
	case ' ':
		flag->space = 1;
		i = 1;
		break;
	}
	return (i);
}
