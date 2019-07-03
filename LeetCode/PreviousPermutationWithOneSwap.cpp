class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& A) {
        if(A.size() <= 1)
            return A;
        int pos = -1;
        for(int i = A.size() - 1; i >= 1; i--) {
            if(A[i - 1] > A[i]) {
                pos = i - 1;
                break;
            }
        }
        if(pos == -1)
            return A;
        for(int i = A.size() - 1; i > pos; i--) {
            if(A[i] < A[pos] && A[i] != A[i - 1]) {
                swap(A[i], A[pos]);
                break;
            }
        }
        return A;
    }
};
