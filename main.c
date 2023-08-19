#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  int len;
 

  len = _printf("Let's try to printf a simple sentence.\n");
  _printf("%c\n", len);
  _printf("String:[%s]\t", "I am a string !");
  printf("String:[%s]\n", "I am a string !");
  _printf("Character:[%c]\t", 'H');
  printf("Character:[%c]\n", 'H');

  return (0);
}
