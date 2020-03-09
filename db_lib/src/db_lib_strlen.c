#include "db_lib.h"

int db_lib_strlen(char *str)
{
    int i;

    i = 0;
    while (*str++)
        i++;
    return (i);
}