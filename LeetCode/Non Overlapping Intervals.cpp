static bool cmp(vector<int> a, vector<int> b) {
    return (a[1] < b[1]);
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(!intervals.size())
            return 0;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), cmp);
        int prev = intervals[0][1], count = 1;
        for(int i = 1; i < n; i++) {
            if(intervals[i][0] >= prev) {
                count++;
                prev = intervals[i][1];
            }
        }
        return n - count;
    }
};
