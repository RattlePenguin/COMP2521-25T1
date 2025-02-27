#include <stdio.h>
#include <stdlib.h>

void solveHanoi(int numDisks, char *fromRod, char *toRod, char *otherRod);

int main(int argc, char *argv[]) {
    solveHanoi(3, "A", "C", "B");
    return 0;
}

void solveHanoi(int numDisks, char *fromRod, char *toRod, char *otherRod) {
    if (numDisks == 0) {
        return;
    }

    // Move n - 1 disks from A to B
    solveHanoi(numDisks - 1, fromRod, otherRod, toRod);

    // Move disk n from A to C
    printf("Move disk from Rod %s to Rod %s\n", fromRod, toRod);

    // Move n - 1 disks from B to C
    solveHanoi(numDisks - 1, otherRod, toRod, fromRod);
}