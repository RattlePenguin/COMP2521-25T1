#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int *nums, int numsSize) {
    int sorted = false;
    while (!sorted) {
        sorted = true; // tells us whether to continue
        for (int i = 1; i < numsSize; ++i) {
            if (nums[i] < nums[i - 1]) {
                // switch
                int temp = nums[i];
                nums[i] = nums[i - 1];
                nums[i - 1] = temp;
                sorted = false; // failed pass
            }
        }
    }

    // Print nums. 
    printf("[");
    for (int i = 0; i < numsSize - 1; ++i){
        printf("%d ", nums[i]);
    }
    printf("%d", nums[numsSize - 1]);
    printf("]\n");
}

int main(void) {
    int nums[10] = { 9, 8, 4, 6, 1, 0, 3, 5, 2, 7 };
    bubbleSort(nums, 10);
    
    return 0;
}