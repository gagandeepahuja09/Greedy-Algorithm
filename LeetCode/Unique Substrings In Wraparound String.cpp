class Solution {
public:
    int findSubstringInWraproundString(string s) {
        int count = 1, ret = 0;
        vector<int> ans(26, 0);
        for(int i = 0; i < s.size(); i++) {
            if(i > 0 && (s[i] - s[i - 1] == 1 || (s[i - 1] == 'z' && s[i] == 'a'))) {
                count++;
            }
            else {
                count = 1;
            }
            ans[s[i] - 'a'] = max(ans[s[i] - 'a'], count);
        }
        return accumulate(ans.begin(), ans.end(), 0);
    }
};
