class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size(), cnt = 0, px = INT_MIN, py = INT_MIN;
        sort(intervals.begin(), intervals.end());
        for(int i = 0; i < n; i++) {
            int x = intervals[i][0], y = intervals[i][1];
            if(py > x) {
                cnt++;
                py = min(py, y);
            }
            else {
                px = x; py = y;
            }
        }
        return cnt;
    }
};
