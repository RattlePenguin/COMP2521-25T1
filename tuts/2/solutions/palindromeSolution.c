#include <stdbool.h>
#include <stdio.h>
#include <string.h>

static bool isPalindrome(char *s);

int main(int argc, char *argv[]) {
	if (argc == 2) {
		if (isPalindrome(argv[1])) {
			printf("yes\n");
		} else {
			printf("no\n");
		}
	}
	return 0;
}

static bool isPalindrome(char *s) {
	int l = 0;
	int r = strlen(s) - 1;

	while (l < r) {
		if (s[l] != s[r]) {
			return false;
		}
		l++;
		r--;
	}
	return true;
}