int hash(char *key, int N) {
	int h = 0;
	char *c;
	for (c = key; *c != '\0'; c++) {
		h = h + *c;
	}
	return h % N;
}