/*
Chocolate Distribution

Given an array A of N integers where each value represents number of chocolates in a packet.

i-th can have A[i] number of chocolates.

There are B number students, the task is to distribute chocolate packets following below conditions:

1. Each student gets one packet.
2. The difference between the number of chocolates in packet with maximum chocolates and packet with minimum chocolates given to the students is minimum.
*/

int Solution::solve(vector<int> &A, int B) {
    if(!A.size())
        return 0;
    if(A.size() == 1)
        return A[0];
    if(B == 0)
        return 0;
    sort(A.begin(), A.end());
    int minDiff = INT_MAX;
    for(int i = B - 1; i < A.size(); i++) {
        minDiff = min(minDiff, A[i] - A[i - B + 1]);
    }
    return minDiff;
}

