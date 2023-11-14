#ifndef SHELL_H
#define SHELL_H

#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <dirent.h>
#include <limits.h>
#include <string.h>
#include <sys/stat.h>

int _string_cmpr(char *s_1, char *s_2);
char *_string_copy(char *de, char *sr);
char *see_path_char(char *com);
char **_sp_st(char *st, char *se);
char *_string_concat(char *de, char *sr);
int _string_len(char *string);
char *_get_enviro(char *enviro_va);
void *_callc_mem(unsigned int n_memory_b, unsigned int s);
void _enviro(void);
int exe(char **argus);
int clear_line(char *Buf);

/*var*/
extern char **environ;

#endif
