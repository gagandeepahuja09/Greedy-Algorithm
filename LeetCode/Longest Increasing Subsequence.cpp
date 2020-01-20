class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> ret;
        for(int i = 0; i < nums.size(); i++) {
            auto it = lower_bound(ret.begin(), ret.end(), nums[i]);
            if(it == ret.end())
                ret.push_back(nums[i]);
            else
                *it = nums[i];
        }
        return ret.size();
    }
};
