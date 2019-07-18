class Solution {
public:
    static bool cmp(vector<int>& A, vector<int>& B) {
        return A[1] < B[1];
    }
    
    int findMinArrowShots(vector<vector<int>>& A) {
        sort(A.begin(), A.end(), cmp);
        int arrows = 0, i = 0, n = A.size();
        while(i < n) {
            arrows++;
            int p = A[i++][1];
            while(i < n && A[i][0] <= p) {
                i++;
            }
        }
        return arrows;
    }
};
