#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of buffer
 * Return: pointer to buffer
 */
void *malloc_checked(unsigned int b)
{
	void *po;

	po = malloc(b);
	if (po == NULL)
		exit(98);
	return (po);
}
