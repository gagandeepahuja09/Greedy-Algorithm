class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        unordered_map<string, int> mp;
        for(string s : A) {
            string even, odd;
            for(int i = 0; i < s.size(); i += 2)
                even += s[i];
            for(int i = 1; i < s.size(); i += 2)
                odd += s[i];
            sort(even.begin(), even.end()); sort(odd.begin(), odd.end());
            mp[even + '_' + odd]++;
        }
        return mp.size();
    }
};
