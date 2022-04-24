#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]) {
    int fd, number, size;
    char buffer[128];

    number = readcount();
    printf(1, "readcount is currently: %d\n", number);

    fd = open("readtest.txt", O_RDONLY);
    size = sizeof(buffer);
    read(fd, &buffer, size);
    number = readcount();
    printf(1, "reacount after calling read(): %d\n", number);
    close(fd);

    exit();
}