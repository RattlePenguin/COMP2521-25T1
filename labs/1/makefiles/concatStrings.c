// Reads in two words and concatenates them

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD 100

static char *concatStrings(char *s1, char *s2);

int main(void) {
	char s1[MAX_WORD + 1];
	char s2[MAX_WORD + 1];

	// Create a format string for scanf
	// E.g., "%100s"
	char format[15];
	sprintf(format, "%%%ds", MAX_WORD);

	printf("Enter a word: ");
	if (scanf(format, s1) != 1) {
		fprintf(stderr, "error: failed to read a word\n");
		exit(EXIT_FAILURE);
	}

	printf("Enter a word: ");
	if (scanf(format, s2) != 1) {
		fprintf(stderr, "error: failed to read a word\n");
		exit(EXIT_FAILURE);
	}

	char *s = concatStrings(s1, s2);
	printf("Concatenated: %s\n", s);
	free(s);
}

static char *concatStrings(char *s1, char *s2) {
	char *s = malloc((strlen(s1) + strlen(s2)) * sizeof(char));
	strcpy(s, s1);
	strcat(s, s2);
	return s;
}

