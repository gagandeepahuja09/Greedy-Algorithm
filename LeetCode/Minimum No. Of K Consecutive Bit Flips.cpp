class Solution {
public:
    
    int minKBitFlips(vector<int>& A, int K) {
        int n = A.size(), ret = 0, flip = 0;
        vector<int> hint(n, 0);
        for(int i = 0; i < n; i++) {
            flip ^= hint[i];
            // A[i] == 0 && flip == 0 || A[i] == 1 && flip == 1
            if(A[i] == flip) {
                ret++;
                if(i + K > n)
                    return -1;
                flip ^= 1;
                if(i + K < n)
                    hint[i + K] ^= 1;
            }
        }
        return ret;
    }
};
