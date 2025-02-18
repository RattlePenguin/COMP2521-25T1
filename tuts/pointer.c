int main(void) {
    int a = 5;
    int b = doublen(a);
    print("a = %d, b = %d", a, b);
    return 0;
}

int doublen(int n) {
    n *= 2;
    return n;
}