#include <stdlib.h>
/**
 * create_array - creates and initializes an array of chars with char c
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *po;
	unsigned int i;

	if (size > 0)
	{
		po = malloc(size * sizeof(char));
		if (po == NULL)
			return (NULL);
	}
		else
			return (NULL);
		for (i = 0; i < size; i++)
			po[i] = c;
		return (po);
}
