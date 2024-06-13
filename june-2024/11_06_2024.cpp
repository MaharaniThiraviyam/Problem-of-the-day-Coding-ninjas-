//padovanSequence
int padovanSequence(int n) {
    // code here.
    if (n == 0 || n == 1 || n == 2) {
        return 1;
    }
    
    long long p0 = 1, p1 = 1, p2 = 1;
    long long p = 0;
    
    for (int i = 3; i <= n; ++i) {
        p = (p0 + p1) % 1000000007;
        p0 = p1;
        p1 = p2;
        p2 = p;
    }
    
    return p;
}
