class Solution {
public:
    int longestDecomposition(string s) {
        int l = 0, r = s.size() - 1, cnt = 0;
        string s1 = "", s2 = "";
        while(l < s.size()) {
            s1 += s[l];
            s2 = s[r] + s2;
            if(s1 == s2) {
                s1 = s2 = "";
                cnt++;
            }
            l++; r--;
        }
        return cnt;
    }
};
