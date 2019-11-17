class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        unordered_map<int, int> mp;
        int sum = 0;
        mp[0] = 0;
        int mx = 0;
        vector<int> v1, v2;
        int sm1 = INT_MAX, sm2 = INT_MAX;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(nums[i] % 3 == 1) {
                v1.push_back(nums[i]);
            }
            if(nums[i] % 3 == 2) {
                v2.push_back(nums[i]);
            }
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        int mn11, mn12, mn21, mn22;
        mn11 = mn21 = mn12 = mn22 = INT_MAX;
        if(v1.size()) {
            mn11 = v1[0];
        }
        if(v1.size() > 1) {
            mn12 = v1[1];
        }
        if(v2.size()) {
            mn21 = v2[0];
        }
        if(v2.size() > 1) {
            mn22 = v2[1];
        }
        if(sum % 3 == 0) {
            return sum;
        }
        else if(sum % 3 == 1) {
            int ans = 0;
            if(mn11 != INT_MAX) {
                ans = sum - mn11;
            }
            if(mn21 != INT_MAX && mn22 != INT_MAX) {
                ans = max(ans, sum - mn21 - mn22);
            }
            return ans;
        }
        else if(sum % 3 == 2) {
            int ans = 0;
            if(mn21 !=INT_MAX) {
                ans = sum - mn21;
            }
            if(mn11 != INT_MAX && mn12 != INT_MAX) {
                ans = max(ans, sum - mn11 - mn12);
            }
            return ans;
        }
        return sum;
    }
};s
