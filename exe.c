#include "shell.h"

/**
 * exe - execute command path ,some handling
 *
 * @argus: arguments
 *
 * Return: ex_st
 *
 */

int exe(char **argus)
{
	int idi = fork(), st;

	if (idi == 0)
	{
		if (execve(argus[0], argus, environ) == -1)
			perror("Error");
	}
	else
	{
		wait(&st);
		if (WIFEXITED(st))
			st = WEXITSTATUS(st);
	}

	return (st);
}
