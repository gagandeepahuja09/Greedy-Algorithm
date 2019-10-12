/*Given an array of citations A (each citation is a non-negative integer) of a researcher, write a function to compute the researcher's h-index.

According to the definition of h-index: "A scientist has index h if h of his/her N papers have at least h citations each, and the other N − h papers have no more than h citations each."*/

int Solution::solve(vector<int> &A) {
    int ans = 0;
    sort(A.begin(), A.end(), greater<int>());
    for(int i = 0; i < A.size(); i++) {
        if(A[i] >= i + 1)
            ans = i + 1;
    }
    return ans;
}

