class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int mnx = INT_MAX, mny = INT_MAX;
        if(!ops.size())
            return m * n;
        for(int i = 0; i < ops.size(); i++) {
            mnx = min(mnx, ops[i][0]);
            mny = min(mny, ops[i][1]);
        }
        return mnx * mny;
    }
};
