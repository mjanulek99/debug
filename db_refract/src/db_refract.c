#include "db_refract.h"

int static db_rf_get_len(char *src, char *tgt, char *sub)
{
    int count;
    int delta;
    int srclen;

    srclen = db_lib_strlen(src);
    delta = db_lib_strlen(sub) - db_lib_strlen(tgt);
    count = db_lib_substr_count(src, tgt);

    return (srclen + (delta * count));
}

int db_refract(char *tgt, char *sub, char *path)
{
    char *src;
    char *dest;
    int status;
    int dest_len;

    if ((status = db_lib_f_read(&src, path)) < 0)
        return (status);

    dest_len = db_rf_get_len(src, tgt, sub);

    if (!(dest = malloc(sizeof(char) * (dest_len + 1))))
        return -1;

    db_rf_substitute(tgt, sub, src, dest);
    status = db_lib_f_write(dest, path, 't');

    free(src);
    free(dest);

    return (status);
}