#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
    int number = readcount();
    printf(1, "readcount is currently: %d\n", number);
    exit();
}