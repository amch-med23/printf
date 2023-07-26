#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

/* number_printing*/
int print_int(va_list l, flags_t *f);
void print_number(int number);
int print_unsigned(va_list l, flags_t *f);

/**
 * count_digit - this is used by print_int to count
 * @i: the operand.
 * the number to return [this means the number of digit
 * that was printed].
 *
 * Return: int
*/
int count_digit(int i);

/* bases_printing */
int print_hex(va_list l, flags_t *f);
int print_big_hex(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);

/* _printf */
int _printf(const char *format, ...);

/* get_print */
int (*get_print(char s))(va_list, flags_t *);

/* flag_retriving (this reteives a flag from the _printf call)*/
int ret_flag(char character, flags_t *flag);

/* alpha_printing */
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);

/* stdout_funcs */
int _putchar(char character);
int _puts(char *str);

/*converting*/
char *convert(unsigned long int n, int base, int lowcase);

/* custom_printing */
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);

/* address_printing */
int print_address(va_list l, flags_t *f);

/* percent_printing */
int print_percent(va_list l, flags_t *f);

#endif
