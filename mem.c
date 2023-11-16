#include "shell.h"

/**
 * _callc_mem - function that using malloc
 *
 * @n_memory_b: array
 *
 * @s: size
 *
 * Return: pointer
 *
 */

void *_callc_mem(unsigned int n_memory_b, unsigned int s)
{
	unsigned int i = 0;
	char *p = NULL;

	if (n_memory_b == 0 || s == 0)
		return (NULL);

	p = malloc(n_memory_b * s);

	if (p == NULL)
		return (NULL);

	for (; i < (n_memory_b * s); i++)
		p[i] = 0;

	return (p);
}
