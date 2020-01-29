class Solution {
public:
    int minRefuelStops(int target, int curr, vector<vector<int>>& s) {
        int ret = 0, i = 0;
        priority_queue<int> pq;
        while(curr < target) {
            while(i < s.size() && s[i][0] <= curr) {
                pq.push(s[i++][1]);
            }
            if(pq.empty())
                return -1;
            curr += pq.top();
            pq.pop();
            ret++;
        }
        return ret;
    }
};
