class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int ans = 0, sum = 0, right = 1;
        mp[sum] = 1;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(mp.count(sum - target)) {
                int left = mp[sum - target];
                if(left >= right) {
                    right = i + 2;
                    ans++;
                }
            }
            mp[sum] = i + 2;
        }
        return ans;
    }
};
