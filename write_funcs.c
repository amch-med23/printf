#include "main.h"
/**
 * _putchar - writes the character to the standard
 * output.
 * @ch: the passed character.
 *
 * Return: (1) on success
 */
int _putchar(char ch)
{
	static char buffer[1024];
	static int i;

	if (ch == -1 || i >= 1024)
	{
		write(1, &buffer, i);
		i = 0;
	}
	if (ch != -1)
	{
	buffer[i] = ch;
		i++;
	}
	return (1);
}

/**
 * _puts - prints a string to stout.
 * @str: the passed string.
 *
 * Return: number of chars written.
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
