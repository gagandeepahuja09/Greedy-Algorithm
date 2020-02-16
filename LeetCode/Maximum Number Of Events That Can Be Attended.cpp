class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());
        priority_queue<int, vector<int>, greater<int>> pq;
        int ret = 0, i = 0, n = events.size();
        for(int d = 1; d <= 100000; d++) {
            while(i < n && events[i][0] == d)
                pq.push(events[i++][1]);
            while(pq.size() && pq.top() < d)
                pq.pop();
            if(pq.size()) {
                ret++;
                pq.pop();
            }
        }
        return ret;
    }
};
