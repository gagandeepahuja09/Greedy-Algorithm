class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        sort(nums.begin(), nums.end(), greater<int>());
        int t = 0;
        vector<int> ret;
        for(int i = 0; i < nums.size(); i++) {
            if(t > sum / 2) {
                return ret;
            }
            ret.push_back(nums[i]);
            t += nums[i];
        }
        return ret;
    }
};
