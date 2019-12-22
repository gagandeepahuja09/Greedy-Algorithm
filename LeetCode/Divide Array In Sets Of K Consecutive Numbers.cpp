class Solution {
public:
    bool isPossibleDivide(vector<int>& A, int k) {
        unordered_map<int, int> mp;
        for(int i = 0; i < A.size(); i++) {
            mp[A[i]]++;
        }
        sort(A.begin(), A.end());
        for(int i = 0; i < A.size(); i++) {
            int v = A[i];
            if(mp.find(v) == mp.end())
                continue;
            for(int j = v; j < v + k; j++) {
                if(mp[j] == 0)
                    return false;
                mp[j]--;
                if(mp[j] == 0) {
                    mp.erase(j);
                }
            }
        }
        return mp.size() == 0;
    }
