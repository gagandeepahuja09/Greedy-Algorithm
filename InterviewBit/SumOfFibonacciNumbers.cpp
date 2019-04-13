int Solution::fibsum(int A) {
    if(A <= 2)
        return 1;
    vector<int> fib;
    fib.push_back(1);
    fib.push_back(1);
    for(int i = 2; fib[i - 1] < A; i++) {
        int val = fib[i - 1] + fib[i - 2];
        fib.push_back(val);
    }
    int sz = fib.size() - 1, cnt = 0;
    while(A > 0) {
        if(fib[sz] <= A && sz >= 0) {
            while(fib[sz] <= A) {
                A -= fib[sz];
                cnt++;
            }
        }
        sz--;
    }
    return cnt;
}

