#include "main.h"
int print_escape_sequence(const char escape)
{
int _return = 0;
switch (escape)
{
case 'n':
_return += _putchar('\n');
break;
case 't':
_return += _putchar('\t');
break;
case '\'':
_return += _putchar('\'');
break;
case '\"':
_return += _putchar('"');
break;
case '?':
_return += _putchar(63);
break;
case '\\':
_return += _putchar('\\');
break;
default:
_return = -1;
break;
}
return (_return);
}
