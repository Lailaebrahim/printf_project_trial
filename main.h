#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


int _putchar(char c);
void  print_number(int n);
int _strlen(const char *s);
int print_string(const char *str);
int print_escape_sequence(const char escape);

int _printf(const char *format, ...);

#endif 
