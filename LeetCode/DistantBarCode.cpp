class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& A, int pos = 0) {
        unordered_map<int, int> mp;
        set<pair<int, int>> s;
        for(auto n : A) {
            mp[n]++;
        }
        for(auto it = mp.begin(); it != mp.end(); it++) {
            s.insert({ it -> second, it -> first });
        }
        for(auto it = s.rbegin(); it != s.rend(); it++) {
            for(auto cnt = 0; cnt < it -> first; cnt++, pos += 2) {
                if(pos >= A.size())
                    pos = 1;
                A[pos] = it -> second;
            }
        }
        return A;
    }
};
