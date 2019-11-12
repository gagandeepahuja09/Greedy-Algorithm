class Solution {
public:
    int carFleet(int target, vector<int>& pos, vector<int>& sp) {
        map<int, double> mp;
        int ret = 0;
        double curr = 0;
        for(int i = 0; i < sp.size(); i++) {
            mp[-pos[i]] = (double)(target - pos[i]) / sp[i];
        }
        for(auto it : mp) {
            if(it.second > curr)
                curr = it.second, ret++;
        }
        return ret;
    }
};
