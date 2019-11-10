class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int, int> prev;
        unordered_map<int, int> next;
        for(int num : nums) {
            next[num]++;
        }
        for(int num : nums) {
            if(!next[num])  // if already
                continue;
            else if(prev[num]) {   // if can be added in the last
                prev[num]--;
                next[num]--;
                prev[num + 1]++;
            }
            else if(next[num + 1] && next[num + 2]) { // if can start a new one 
                next[num + 1]--;
                next[num + 2]--;
                next[num]--;
                prev[num + 3]++;
            }
            else  // cannot be part of any sequence
                return false;
        }
        return true;
    }
};
