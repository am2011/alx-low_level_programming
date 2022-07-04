#include <stdio.h>

#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

int dec;

char letter;

for (dec = '0'; dec <= '9'; dec++)

putchar(dec);

for (letter = 'a'; letter <= 'f'; letter++)
putchar(letter);
putchar('\n');

return (0);

}
