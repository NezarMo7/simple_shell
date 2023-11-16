#include "shell.h"

/**
 * clear_line - checks if exists a clear
 *
 * @Buf: line
 *
 * Return: 0 or 1
 *
 */


int clear_line(char *Buf)
{
	int x;

	for (x = 0; Buf[x] != '\0'; x++)
	{
		if (Buf[x] != ' ')
			return (0);
	}
	return (1);
}
