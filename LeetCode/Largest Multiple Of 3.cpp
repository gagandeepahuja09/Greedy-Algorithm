class Solution {
public:
    string largestMultipleOfThree(vector<int>& dig) {
        vector<vector<int>> d(3);
        int sum = 0;
        sort(dig.begin(), dig.end(), greater<int>());
        for(int i = 0; i < dig.size(); i++) {
            d[dig[i] % 3].push_back(dig[i]);
            sum = (sum + dig[i]) % 3;
        }
        if(sum) {
            if(!d[sum].size()) {
                if(d[3 - sum].size() < 2)
                    return "";
                d[3 - sum].pop_back();
                d[3 - sum].pop_back();
            }
            else {
                d[sum].pop_back();
            }
        }
     
        string ret;
        for(int i = 0; i < 3; i++) {
            for(auto a : d[i]) {
                ret += (a + '0');
            }
        }
        sort(ret.begin(), ret.end(), greater<int>());
        if(ret.size() && ret[0] == '0')
            return "0";
        return ret;
    }
};
