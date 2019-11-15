class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count = 0, pos = 0;
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] > nums[i + 1]) {
                count++;
                pos = i;
            }
        }
        if(count > 1)
            return false;
        if(pos == 0 || pos == nums.size() - 2)
            return true;
        if(nums[pos] <= nums[pos + 2] || nums[pos - 1] <= nums[pos + 1])
            return true;
        return false;
    }
};
