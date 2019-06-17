#define MOD 10000003

int Solution::seats(string A) {
    int cnt = 0, ret = 0;
    for(int i = 0; i < A.size(); i++) {
        if(A[i] == 'x')
            cnt++;
    }
    int c = 0;
    int median = 0;
    for(int i = 0; i < A.size(); i++) {
        if(A[i] == 'x') {
            c++;
            if((cnt / 2 + 1) == c && cnt % 2) {
                median = i;
            }
            if((cnt / 2 == c || (cnt / 2 + 1) == c) && cnt % 2 == 0) {
                median += i;
            }
        }
    }
    if(cnt % 2 == 0)
        median /= 2;
    int i = median, start = i;
    while(i >= 0) {
        if(A[i] == 'x') {
            ret = ret % MOD + (start % MOD - i % MOD) % MOD;
            start--;
        }
        i--;
    }
    i = median + 1;
    int end = i;
    while(i < A.size()) {
        if(A[i] == 'x') {
            ret = ret % MOD + (i % MOD - end % MOD) % MOD;
            end++;
        }
        i++;
    }
    return ret;
}

