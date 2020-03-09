// copie une string jusqua taille size. si size est negatif, copie jusqu'au 0. met le 0 a la fin de dest
#include "db_lib.h"

void db_lib_strcpy(char *src, char *dest, int mode)
{
    while (*src)
        *dest++ = *src++;
    if (mode == 1)
        *dest = 0;
}