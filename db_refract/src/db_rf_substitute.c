#include "db_refract.h"

int db_rf_subs_strcmp(char *str, char *sub)
{
    while (*sub && *str == *sub)
    {
        sub++;
        str++;
    }
    if (!*sub)
        return (1);
    return (0);
}

void db_rf_substitute(char *tgt, char *sub, char *src, char *dest)
{
    int tgt_len;
    int sub_len;
    int shift;

    tgt_len = db_lib_strlen(tgt);
    sub_len = db_lib_strlen(sub);

    while (*src)
    {
        if (db_rf_subs_strcmp(src, tgt))
        {
            db_lib_strcpy(sub, dest, 0);
            dest = dest + sub_len;
            src = src + tgt_len;
        }
        else
            *dest++ = *src++;
    }
    *dest = 0;
}