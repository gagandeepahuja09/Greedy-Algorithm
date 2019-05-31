int Solution::maxp3(vector<int> &A) {
    int maxA = INT_MIN, maxB = INT_MIN, maxC = INT_MIN;
    int minA = INT_MAX, minB = INT_MAX;
    for(int i = 0; i < A.size(); i++) {
        if(A[i] > maxA) {
            maxC = maxB;
            maxB = maxA;
            maxA = A[i];
        }
        else if(A[i] > maxB) {
            maxC = maxB;
            maxB = A[i];
        }
        else if(A[i] > maxC) {
            maxC = A[i];
        }
        if(A[i] < minA) {
            minB = minA;
            minA = A[i];
        }
        else if(A[i] < minB) {
            minB = A[i];
        }
    }
    int ans= INT_MIN;
    ans = max(ans, maxA * maxB * maxC);
    ans = max(ans, maxA * minA * minB);
    return ans;
}

