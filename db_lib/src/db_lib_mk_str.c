// cree un string dans le pointeur envoye. retourne l etat du malloc
#include "db_lib.h"

int db_lib_mk_str(char *src, char **dest)
{
    int src_len;
    int status;

    src_len = db_lib_strlen(src);
    if (!(*dest = malloc(sizeof(char *) * (src_len + 1))))
        return (0);
    db_lib_strcpy(src, *dest, 1);
    return (1);
}