#ifndef __DB_LIB_H__
#define __DB_LIB_H__

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define F_LEN_BUFF_SIZE 100

int db_lib_f_len(char *path);
int db_lib_f_read( char **buff, char *path);
int db_lib_f_write(char *src, char *path, int mode);
int db_lib_mk_str(char *src, char **dest);
void db_lib_strcpy(char *src, char *dest, int mode);
int db_lib_strlen(char *str);
int db_lib_substr_count(char *str, char *substr);

#endif