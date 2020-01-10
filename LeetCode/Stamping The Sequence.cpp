class Solution {
public:
    // Greedy
    // Apply reverse DFS
    bool isMatch(string s, string t, int i) {
        if(i + s.size() > t.size())
            return false;
        for(int j = 0; j < s.size(); j++) {
            if(t[i + j] != '*' && t[i + j] != s[j]) {
                return false;
            }
        }
        return true;
    }
    
    int match(string s, string& t, int i) {
        for(int j = 0; j < s.size(); j++) {
            t[i + j] = '*';
        }
        int cnt = 0; 
        for(int i = 0; i < t.size(); i++) {
            if(t[i] == '*')
                cnt++;
        }
        return cnt;
    }
    
    int countStars(string t, int stars = 0) {
        for(char c : t)
            stars += (c == '*');
        return stars;
    }
    
    vector<int> movesToStamp(string stamp, string target) {
        int stars = 0;
        int n = target.size();
        vector<int> ret;
        bool hasMatch = false;
        vector<bool> vis(n, false);
        while(stars < target.size()) {
            for(int i = 0; i < target.size(); i++) {
                if(!vis[i] && isMatch(stamp, target, i)) {
                    hasMatch = true;
                    stars = match(stamp, target, i);
                    vis[i] = true;
                    ret.push_back(i);
                    if(stars == target.size()) {
                        break;
                    }
                }
            }
            if(!hasMatch)
                return ret;
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};
