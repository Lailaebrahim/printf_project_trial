#include "main.h"

/**
 * print_string - function that print a string
 * @str : pointer to the string
 * Return: -1 if failed
 *          or number of chars printed if successfull
 */


int print_string(const char *str)
{
int str_len = _strlen(str);
int _return = 0;
int i;

if (str == NULL)
{
_return = -1;
}
else
{
for (i = 0; i < str_len && str[i] != '\0' ; i++)
{
_return += _putchar(str[i]);
}

}

return (_return);
}
