class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        int n = A.size(), m = A[0].size(), ans = 0;
        for(int j = 0; j < m; j++) {
            int count = 0;
            for(int i = 0; i < n; i++) {
                count += (A[i][j] == A[i][0]);
            }
            ans += max(count, n - count) * (1 << (m - j - 1));
        }
        return ans;
    }
};
