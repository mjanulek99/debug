#include "db_lib.h"

int db_lib_f_len(char *path)
{
    int fd;
    int temp;
    int rst;
    char c[F_LEN_BUFF_SIZE];
    int size;

    rst = 0;
    size = F_LEN_BUFF_SIZE;

    if ((fd = open(path, O_RDONLY)) < 0)
    {
        close(fd);
        return (-2);
    }
    while ((temp = read(fd, c, size)) == size)
        rst = rst + temp;
    if (temp < 0)
        return (-1);
    rst = rst + temp;
    return (rst);
}