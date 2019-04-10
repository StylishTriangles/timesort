#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int max = 0;
    for (int i = 1; i < argc; i++) {
        int val = atoi(argv[i]);
        if (val > max) {
            max = val;
        }
        if (!fork()) {
            usleep(val*1000);
            printf("%d\n", val);
            return 0;
        }
    }
    usleep(max*1000+1000);
    return 0;
};