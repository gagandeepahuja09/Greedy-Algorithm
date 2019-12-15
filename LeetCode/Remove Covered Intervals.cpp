class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& in) {
        sort(in.begin(), in.end());
        int mx = in[0][1];
        int ans = in.size();
        for(int i = 1; i < in.size(); i++) {
            if(in[i][1] <= mx) {
                ans--;
            }
            else {
                mx = in[i][1];
            }
        }
        return ans;
    }
};
