#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char start = 'z';
char stop = 'a';
while (start >= stop)
{
putchar(start);

start--;
}
putchar('\n');
return (0);
}
