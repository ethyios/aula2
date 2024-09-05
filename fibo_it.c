long long int fibo_it (int n) {
    long long int a=0, b=1, c=0;
    int i;

    if (n == 0) return 0;
    if (n == 1) return 1;

    for (i=2; i<=n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}