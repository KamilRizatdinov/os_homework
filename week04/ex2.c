#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/* Program, which creates 2^n processes */

int main() {
    for (int i = 0; i < 3; ++i) {
        fork();
    }

    sleep(5);
    return 0;
}
