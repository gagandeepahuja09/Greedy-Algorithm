class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        if(!p.size())
            return 0;
        sort(p.begin(), p.end());
        vector<vector<int>> ret;
        ret.push_back(p[0]);
        for(int i = 1; i < p.size(); i++) {
            if(ret.back()[1] >= p[i][0]) {
                ret.back()[1] = min(ret.back()[1], p[i][1]);
            }
            else {
                ret.push_back(p[i]);
            }
        }
        return ret.size();
    }
};
