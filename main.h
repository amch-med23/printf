#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct flags - struct to contain flags to use when
 * the flag specifier is passed to _printf().
 * @plus: a flag to '+'.
 * @space: aflag to ' '.
 * @hash: a flag to '#'.
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - to print hundle the format
 * @c: format soecifier.
 * @f: printer to the correct format handler.
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

/* _printf */
int _printf(const char *format, ...);
/**
 * ret_flag (this is to retrive flags, its gonna be called 
 * with is a parent function)
 */
int ret_flag(char ch, flags_t *flag);
/* get_print */
int (*get_print(char s))(va_list, flags_t *);

/*printing alpha*/
int print_char(va_list l, flags_t *f);
int print_string(va_list l, flags_t *f);

/*printing numbers*/
int print_int(va_list l, flags_t *f);
void print_number(int number);
int print_unsigned(va_list l, flags_t *f);

/*write funcsions*/
int _putchar(char character);
int _puts(char *str);

/*print address*/
int print_address(va_list l, flags_t *f);

/*print percent*/
int print_percent(va_list l, flags_t *f);

/*print custom*/
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);

/*print base*/
int print_hex(va_list l, flags_t *f);
int print_big_hex(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);

#endif
