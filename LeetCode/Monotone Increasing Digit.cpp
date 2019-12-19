class Solution {
public:
    int monotoneIncreasingDigits(int N) {
        if(N <= 9)
            return N;
        string s = to_string(N);
        string temp = s;
        for(int i = s.size() - 1; i > 0; i--) {
            if(s[i] < s[i - 1]) {
                s[i] = '9';
                s[i - 1]--;
            }
        }
        bool smaller = false;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] < temp[i] && !smaller) {
                smaller = true;
                continue;
            }
            if(smaller)
                s[i] = '9';
        }
        while(s[0] == '0') {
            s.erase(s.begin());
        }
        return stoi(s);
    }
};
