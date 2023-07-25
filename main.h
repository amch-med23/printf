#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int ch_f(const char **format, va_list ap);
int print_str(va_list ap);
int print_char(va_list ap);
int print_perc(va_list aap);
int print_decimal(va_list ap);
int print_int(int n);
int print_binary(va_list ap);
int print_unsigned(va_list ap);

/**
 * struct fh - to hundle format
 * @spc: format soecifier.
 * @hndlr: the handler
 * description: the structure to handle the format.
 */
typedef struct gh
{
	char spc;
	int (*hndlr)(va_list);
} GH;

#endif
