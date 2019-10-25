class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        int n = A.size(), m = A[0].size(), ans = 0;
        for(int i = 0; i < n; i++) {
            // Toggling rows by first column, we want to make all
            // 1 or all 0
            for(int j = 0; j < m; j++) {
                A[i][j] ^= A[i][0];    
            }
        }
        for(int j = 0; j < m; j++) {
            int cnt = 0;
            for(int i = 0; i < n; i++) {
                if(A[i][j] == 0)
                    cnt++;
            }
            ans += (max(cnt, n - cnt) * (1 << (m - 1 - j)));
        }
        return ans;                
    }   
};
