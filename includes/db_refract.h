#ifndef __REFRACT_H__
#define __REFRACT_H__

#include "db_lib.h"

void db_rf_substitute(char *tgt, char *sub, char *src, char *dst);
int db_refract(char *tgt, char *sub, char *path);

#endif