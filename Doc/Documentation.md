ALX group project: _printf() Function Documentation

Description:

The _printf function is a custom implementation of the standard printf function in C. It is designed to provide formatted output, just like printf, but with a subset of the standard format specifiers. This function supports various data types and can handle a variable number of arguments.

Function Signature:

The prototype of the function
int _printf(const char *format, ...);

Parameters:

format: A pointer to a constant character string that contains the format specifier and optional text to be printed. The format specifier starts with % and may be followed by conversion characters.

 (Ellipsis): A variable number of arguments that will be printed according to the format specifier provided in the format string. The number and types of arguments must match the format specifier for correct behavior.

Return Values:

The function has only 2 return paths which are as follows
The function returns the total number of characters successfully printed (excluding the null-terminator), or -1 if an error occurs.

Supported Format Specifiers:
The _printf() function deals with the following formats
The _printf() function supports the following format specifiers:

%c: Character format specifier.
%s: String format specifier.
%d, %i: Signed decimal integer format specifier.
%u: Unsigned decimal integer format specifier.
%x, %X: Unsigned hexadecimal integer format specifier.
%b: prints a number in binary format.
%r: prints a strig in reverse.
%R: printf the rot13 incodeing of a string.
%%: A literal % character (escape sequence for a single %).

Flags:

The _printf function supports certain flags that can modify the output behavior.
' ': the space flag.
'#': the hash flasg.
'+': the plus flag.

Error Handling
The _printf() function performs some basic error checks to ensure that the format string is not null and that it doesn't consist of a single % character or % followed by a space as the only content. If any of these conditions are met, the function returns -1 to indicate an error.

Athous:

Mohamed Amouch
Email:@amch-med23 
Tinotenda Dzvurumi 
Email:tinodee206@gmail.com

Thank you and enjoy
