class Solution {
public:
    string breakPalindrome(string s) {
        string prev = s;
        int n = s.size(); 
        for(int i = 0; i < s.size(); i++) {
            char temp = s[i];
            for(char c = 'a'; c < temp; c++) {
                s[i] = c;
                if(s[i] != s[n - 1 - i]) {
                    return s;
                }
            }
            s[i] = temp;
        }
        for(int i = s.size() - 1; i >= 0; i--) {
            char temp = s[i];
            for(char c = temp; c <= 'z'; c++) {
                s[i] = c;
                if(s[i] != s[n - 1 - i]) {
                    return s;
                }
            }
            s[i] = temp;
        }
        return "";
    }
};
