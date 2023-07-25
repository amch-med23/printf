#include "main.h"
/**
 * _purchar - writes the character to the standard
 * output.
 * Return: (1) on success
 */
int _putchar(char ch)
{
	static char buffer[1024] __attribute__((unused));
	static int i;

	if (ch == -1 || i >= 1024)
	{
		write(1, &ch, 1);
		i = 0;
	}
	if (ch != -1)
	{
	buffer[i] = ch;
		i++;
	}
	return (i);
}

/**
 * _puts - prints a string to stout.
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
