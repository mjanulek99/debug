#include "db_refract.h"

int main ()
{
    char path[100] = "text/test_ecrit2";
    char tgt[100] = "";
    char sub[100] = "";
    char *rst;

    db_refract(tgt, sub, path);
    db_lib_f_read(&rst, path);
    printf("refract ok :\n[%s]\n", rst);
    free(rst);
}