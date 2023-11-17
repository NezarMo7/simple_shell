#include "shell.h"

/**
 * main - open program
 *
 * Return: ex_st
 *
 */

int main(void)
{
	char *Buf = NULL, **argus;
	size_t r_s = 0;
	ssize_t Buf_s = 0;
	int ex_st = 0;

	while (1)
	{
		if (isatty(0))
			printf("h$ ");

		Buf_s = getline(&Buf, &r_s, stdin);
		if (Buf_s == -1 || _string_cmpr("exit\n", Buf) == 0)
		{
			free(Buf);
			break;
		}
		Buf[Buf_s - 1] = '\0';

		if (_string_cmpr("enviro", Buf) == 0)
		{
			_enviro();
			continue;
		}

		if (clear_line(Buf) == 1)
		{
			ex_st = 0;
			continue;
		}

		argus = _sp_st(Buf, " ");
		argus[0] = see_path_char(argus[0]);

		if (argus[0] != NULL)
			ex_st = exe(argus);
		else
			perror("Error");
			ex_st = 1
		free(argus);
	}
	return (ex_st);
}
