class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int, int> cnts, tails;
        for(int i : nums)
            cnts[i]++;
        for(int i : nums) {
            if(!cnts[i])
                continue;
            cnts[i]--;
            // Greedily our priority should be to add element to a sequence of length >= 3
            // so we check if it's possible
            if(tails[i - 1]) {
                tails[i - 1]--;
                tails[i]++;
            }
            // If not, we should starting forming a sequence only if nums[val + 1] and nums[val + 2]
            // have some frequency
            else if(cnts[i + 1] && cnts[i + 2]) {
                cnts[i + 1]--;
                cnts[i + 2]--;
                tails[i + 2]++;
            }
            else
                return false;
        }
        return true;
    }
};
