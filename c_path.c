#include "shell.h"

/**
 * see_path_char - get file from path
 *
 * @com: command
 *
 * Return: path
 *
 */

char *see_path_char(char *com)
{
	char *_path = _get_enviro("PATH"), *_path_copy;
	char **_path_sp;
	char *_path_con = NULL;
	int x = 0, _path_length = 0;
	struct stat info;

	if (stat(com, &info) == 0)
		return (com);

	_path_copy = malloc(_string_len(_path) + 1);

	_path_copy = _string_copy(_path_copy, _path);
	_path_sp = _sp_st(_path_copy, ":");

	while (_path_sp[x])
	{
		_path_length = _string_len(_path_sp[x]);

		if (_path_sp[x][_path_length - 1] != '/')
			_path_con = _string_concat(_path_sp[x], "/");

		_path_con = _string_concat(_path_sp[x], com);

		if (stat(_path_con, &info) == 0)
			break;

		x++;
	}

	free(_path_copy);

	if (!_path_sp[x])
	{
		free(_path_sp);
		return (NULL);
	}

	free(_path_sp);
	return (_path_con);
}
