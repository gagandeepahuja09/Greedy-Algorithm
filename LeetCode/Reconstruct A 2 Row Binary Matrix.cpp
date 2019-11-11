class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        int n = colsum.size();
        vector<vector<int>> ret(2, vector<int>(n, 0));
        for(int i = 0; i < n; i++) {
            if(!colsum[i])
                continue;
            if(colsum[i] == 2) {
                ret[0][i] = ret[1][i] = 1;
                upper--; lower--;
            }
            else if(colsum[i] == 1) {
                if(upper >= lower) {
                    ret[0][i] = 1;
                    upper--;
                }
                else {
                    ret[1][i] = 1;
                    lower--;
                }
            }
        }
        if(upper || lower)
                return {};
        return ret;
    }
};
