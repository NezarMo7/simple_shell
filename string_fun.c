#include "shell.h"

/**
 * _string_cmpr - compares two strings
 *
 * @s_1: pointer
 *
 * @s_2: pointer
 *
 * Return: zero
 *
 */

int _string_cmpr(char *s_1, char *s_2)
{
	while (*s_1 && *s_2)
	{
		if (*s_1 != *s_2)
			return (*s_1 - *s_2);

		s_1++;
		s_2++;
	}
	return (0);
}

/**
 * _string_copy - the function that copies strings
 *
 * @de: pointer
 *
 * @sr: ponter
 *
 * Return: x
 *
 */
char *_string_copy(char *de, char *sr)
{
	char *x = de;

	while (*sr != '\0')
	{
		*de = *sr;
		de++;
		sr++;
	}
	*de = '\0';
	return (x);
}

/**
 * _sp_st - split string
 *
 * @st: string
 *
 * @se: separator
 *
 * Return: the result of pointer
 *
 */

char **_sp_st(char *st, char *se)
{
	char *a, **sp_st;
	int x = 0;

	a = strtok(st, se);
	sp_st = (char **)_callc_mem(100, sizeof(char *));

	if (!sp_st)
	{
		free(sp_st);
		return (NULL);
	}

	while (a)
	{
		sp_st[x] = a;
		a = strtok(NULL, se);
		x++;
	}
	return (sp_st);
}

/**
 * _string_concat - function
 *
 * @de: string
 *
 * @sr: string
 *
 * Return: @de
 *
 */

char *_string_concat(char *de, char *sr)
{
	int c, d;

	for (c = 0; de[c] != '\0'; c += 1)
	{}

	for (d = 0; sr[d] != '\0'; d += 1)
	{
		de[c] = sr[d];
		c++;
	}
	de[c] = '\0';
	return (de);
}

/**
 * _string_len - string length
 *
 * @string: string
 *
 * Return: x
 *
 */

int _string_len(char *string)
{
	int x = 0;

	while (string[x] != '\0')
		x++;

	return (x);
}
