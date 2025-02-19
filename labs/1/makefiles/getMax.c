
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("How many integers? ");
	int numInts;
	if (scanf("%d", &numInts) != 1) {
		printf("error: failed to read number\n");
		exit(EXIT_FAILURE);
	}

	printf("Enter integers: ");
	int max;
	int num;
	int i = 0;
	while (i < numInts && scanf("%d", &num) == 1) {
		if (num > max) {
			max = num;
		}
		i++;
	}
	
	printf("Maximum: %d\n", max);
}

