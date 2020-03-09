#include "db_lib.h"

static int db_lib_substr_count_strcmp(char **str, char *substr)
{
    char *temp;

    temp = *str;

    while (*temp && *temp == *substr)
    {
        temp++;
        substr++;
    }
    if (*substr)
        return (0);
    *str = temp - 1;
    return (1);

}

int db_lib_substr_count(char *str, char *substr)
{
    int count;
    
    if (!*substr || !*str)
        return (0);
    while (*str)
    {
        if (db_lib_substr_count_strcmp(&str, substr))
            count++;
        str++;
    }

    return (count);
}