int Solution::bulbs(vector<int> &A) {
    int cnt = 0;
    bool toggle = false;
    for(int i = 0; i < A.size(); i++) {
        if((A[i] == 0 && !toggle) || A[i] == 1 && toggle) {
            toggle = !toggle;
            cnt++;
        }
    }
    return cnt;
}

