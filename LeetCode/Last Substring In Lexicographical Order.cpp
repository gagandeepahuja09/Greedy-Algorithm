class Solution {
public:
    string lastSubstring(string s) {
        int maxIdx = 0, i = 1;
        while(i < s.size()) {
            if(s[i] > s[maxIdx]) {
                maxIdx = i;
            }
            else if(s[i] == s[maxIdx]) {
                // we can ignore all these j because we know that they will
                // be smaller than s[i] because they are equal to some s[i + k] < s[maxIdx]
                int j = i, k = maxIdx;
                while(j < s.size() && k < i && s[j] == s[k]) {
                    j++; k++;
                }
                if(j < s.size() && k < i && s[j] > s[k]) 
                    maxIdx = i;
                i = j;
                continue;
            }
            i++;
        }
        return s.substr(maxIdx);
    }
};
