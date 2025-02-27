#include <stdio.h>

int doublen(int n);

int main(void) {
    int a = 5;
    int b = doublen(a);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

// Doubles n, then returns it.
int doublen(int n) {
    n *= 2;
    return n;
}