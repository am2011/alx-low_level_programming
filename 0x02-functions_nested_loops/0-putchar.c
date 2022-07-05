#include "main.h"
#include <string.h>
#ifndef MAIN_H
#define MAIN_H

void _putchar(char str);
#endif


/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

char str[9] = "_putchar";

int i;



for (i = 0; i < 9; i++)
{

_putchar(str[i]);
}
_putchar('\n');
return (0);

}
