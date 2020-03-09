#include "db_lib.h"

int db_lib_f_read(char **buff, char *path)
{
    int fd;
    int f_len;
    int status;

    f_len = db_lib_f_len(path);

    if ((fd = open(path, O_RDONLY)) < 0)
    {
        db_lib_mk_str("db_f_read_eror", buff);
        return (-2);
    }
    if (!(*buff = malloc(sizeof(char) * (f_len + 1))))
    {
        close(fd);
        return (-1);
    }
    if ((status = read(fd, *buff, f_len)) != f_len)
    {
        close(fd);
        return (-3);
    }
    close(fd);
    (*buff)[status] = 0;
    return (status);
}