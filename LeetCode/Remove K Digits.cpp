class Solution {
public:
    string removeKdigits(string num, int k) {
        int K = k;
        vector<char> stk;
        string ans;
        for(char c : num) {
            while(!stk.empty() && stk.back() > c && k) {
                stk.pop_back();
                k--;
            }
            stk.push_back(c);
        }
        for(int i = 0; i < stk.size(); i++)
            ans += stk[i];
        for(int i = 0; i < num.size() - ans.size(); i++)
            ans += "0";
        int pos = 0, len = num.size() - K;
        cout << ans << endl;
        while(pos < len && ans[pos] == '0') {
            pos++;
        }
        // cout << pos << " " << len << endl;
        return pos >= len ? "0" :  ans.substr(pos, len - pos);
    }
};
