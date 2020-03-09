#include "db_lib.h"

int db_lib_f_write(char *src, char *path, int mode)
{
    int fd;
    int src_len;

    src_len = db_lib_strlen(src);

    if (mode == 't')
    {
        if ((fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU | S_IRWXG | S_IRWXO)) < 1)
            return -2;
    }
    else if (mode == 'a')
    {
        if ((fd = open(path, O_WRONLY | O_CREAT | O_APPEND, S_IRWXU | S_IRWXG | S_IRWXO)) < 1)
            return -2;
    }
    else
        return (-3);
    if ((write(fd, src, src_len)) != src_len)
        return (-1);
    // fprintf(stderr, "fd: %d\n", fd);
    // write(fd, src, src_len);
    close(fd);

    return (src_len);
}