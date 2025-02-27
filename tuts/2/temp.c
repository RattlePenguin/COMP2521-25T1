#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    if (argc == 2) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                printf("%d\n", j);
            }
        }
    }

    return 0;
}