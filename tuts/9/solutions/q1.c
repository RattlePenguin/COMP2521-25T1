int hash(char *key, int N) {
    int h = 0;
    char *c; int i;
    for (c = key, i = 0; *c != '\0'; c++, i++) {
        h = h + (*c * i);
    }
    return h % N;
}