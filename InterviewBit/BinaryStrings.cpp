int Solution::solve(string A, int B) {
    int ans = 0;
    for(int i = 0; i < A.size() - B + 1; i++) {
        if(A[i] == '0') {
            ans++;
            for(int k = i; k < i + B; k++) {
                if(A[k] == '0')
                    A[k] = '1';
                else
                    A[k] = '0';
            }
        }
    }
    for(int i = 0; i < A.size(); i++) {
        if(A[i] == '0')
            return -1;
    }
    return ans;
}

