#include "main.h"
/**
 * _printf - print function
 * @format : format of print
 * @... : variable number of parameter
 * Return: number of printed charaters
 */

int _printf(const char *format, ...)
{
va_list args;
int format_len = _strlen(format), i = 0, _return = 0;
va_start(args, format);
for (i = 0 ; i < format_len && *(format + i) != '\0' ; ++i)
{
if (format[i] != '%')
{
if (format[i] == '\\')
{
i++;
_return += print_escape_sequence(format[i]);
}
else
{
_putchar (format[i]);
}
}
else
{
i++;
switch (format[i])
{
case 'c':
_return += _putchar(va_arg(args, int));
break;
case's':
_return += print_string(va_arg(args, char *));
break;
default:
break;
}}}
return (_return);
}
