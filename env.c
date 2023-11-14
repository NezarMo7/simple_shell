#include "shell.h"

/**
 *
 * _get_enviro - get enviro var
 *
 * @enviro_va: enviro var
 *
 * Return: enviro var result
 *
 */

char *_get_enviro(char *enviro_va)
{
	int x = 0, y;
	int s;

	while (environ[x])
	{
		s = 1;

		for (y = 0; environ[x][y] != '='; y++)
		{
			if (environ[x][y] != enviro_va[y])
				s = 0;
		}
		if (s == 1)
			break;
		x++;
	}
	return (&environ[x][y + 1]);
}

/**
 *
 *
 * _enviro - prints enviro
*/
void _enviro(void)
{
	int x = 0;

	while (environ[x])
	{
		printf("%s\n", environ[x]);
		x++;
	}
}
