#include "db_lib.h"

int main()
{
    char path[100] = "text/test_ecrit2";
    char *rst;
    int status_read;
    int status_write;

    printf("%d\n", db_lib_substr_count("a", "a")) ;
}