#include "main.h"

/**
 * print_pointer -prints the value of a pointer variable
 * @types: an arguments
 * @buffer:array to handle print
 * @flags:ounnts active flags
 * @width:width
 * @precision:specification
 * @size:specifier
 * Return:amount of chars printed.
 */
int print_pointer(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
char extra_c = 0, padd = ' ';
int ind = BUFF_SIZE - 2, length = 2, padd_start = 1;
unsigned long num_addrs;
char map_to[] = "0123456789abcdef";
void *addrs = va_arg(types, void *);
UNUSED(width);
UNUSED(size);

if (addrs == NULL)
return (write(1, "NULL", 4));
buffer[BUFF_SIZE - 1] = '\0';
UNUSED(precision);
num_addrs = (unsigned long)addrs;

while (num_addrs > 0)
{
buffer[ind--] = map_to[num_addrs % 16];
num_addrs /= 16;
length++;
}
if ((flags & F_ZERO) && !(flags & F_MINUS))
padd = '0';
if (flags & F_PLUS)
extra_c = '+', length++;
else if (flags & F_SPACE)
extra_c = ' ', length++;
ind++;

return (write_pointer(buffer, ind, length,
width, flags, padd, extra_c, padd_start));
}

/**
 * print_non_printable -Prints ascii codes in hexa of non printable chars
 * @types:arguments
 * @buffer: array to handle print
 * @flags:counts active flags
 * @width: width
 * @precision:specification
 * @size:amount of specifier
 * Return:amount of chars printed
 */
int print_non_printable(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
intai = 0, offset = 0;
char *str = va_arg(types, char *);
UNUSED(flags);
UNUSED(width);
UNUSED(precision);
UNUSED(size);

if (str == NULL)
return (write(1, "(null)", 6));
while (str[a] != '\0')
{
if (is_printable(str[i]))
buffer[a + offset] = str[a];
else
offset += append_hexa_code(str[a], buffer, a + offset);
a++;
}
buffer[a + offset] = '\0';
return (write(1, buffer, a + offset));
}
/**
 * print_reverse -prints reverse string.
 * @types - arguments
 * @buffer: array to handle print
 * @flags: amout active flags
 * @width:width
 * @precision: specification
 * @size:specifier
 * Return:amount of chars printed
 */
int print_reverse(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
char *str;
int a, count = 0;
UNUSED(buffer);
UNUSED(flags);
UNUSED(width);
UNUSED(size);
str = va_arg(types, char *);
if (str == NULL)
{
UNUSED(precision);
str = ")Null(";
}
for (a = 0; str[a]; a++)
;
for (a = a - 1; a >= 0; a--)
{
char z = str[a];
write(1, &z, 1);
count++;
}
return (count);
}
